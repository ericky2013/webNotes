<?php 
	// phpinfo();   //查看是否有memcache扩展库

	$mem = new Memcache();

	$mem->connect("localhost","11211");   //连接到memcache服务器

			//普通的查询每次都需要查询数据库 使用memcache将数据查询一次保存到内存中
			
			/*
			$mysqli = new mysqli("localhost","root","lexinchen","bookstore");

			$sql = "select * from books";

			$result = $mysqli->query($sql);

			$data = array();

			while( $row=$result->Fetch_assoc() ){
				$data[] = $row;
			}*/

	//下面使用memcache

	/*
	* 注意:
	*	1.同一个项目安装两次,$mem_key要有前缀 不要搞混淆了
	*	2.技巧:可以使用sql语句最为要保存的mem_key值,这样凡是同样的sql语句就会保存相同的信息,即每个页面的sql语句只要是相同就会只保存一份
	*	$sql = "select * from books";
	*   $mem_key = $sql;
	*   但是sql语句不区分大小写,所以赋给$mem_key之前需要做一个MD5算法,保证一致性
	*   $mem_key = md5($sql);  //如果觉得md5(32位太长)可以做一个截取字符串
	*   $mem_key = substr(md5($sql),10,8);   //从第10个开始取8个字符
	*   3.注意memcache的安全性 远程的用户也是可以通过telnet ip 11211来访问读取你的内存数据的 
	*
	*/

	$mem_key = "books";
	$data = $mem->get($mem_key);

	if(!$data){    //如果是第一次请求

		$sql = "select * from books";
		$mysqli = new mysqli("localhost","root","lexinchen","bookstore");
		$result = $mysqli->query($sql);
		$data = array();
		while( $row=$result->Fetch_assoc() ){
			$data[]=$row;
		}

		$result->free();
		$mysqli->close();

		//保存在memcache(内存)中
		// $mem->add('books');
		$mem->set($mem_key,$data,MEMCACHE_COMPRESSED,3600);   //保存3600s

		echo $sql;   //测试 只有第一次执行会输出 在一个小时内
	}


	echo "<pre>";
	print_r($data);
	echo "</pre>";

	$mem->close();  //关闭连接  这个函数不会关闭持久化连接， 持久化连接仅仅会在web服务器关机/重启时关闭 见手册


