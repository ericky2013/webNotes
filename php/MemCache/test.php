<?php 
	// phpinfo();   //查看是否有memcache扩展库

	$mem = new Memcache();

	$mem->connect("localhost","11211");   //连接到memcache服务器
	// $mem->pconnect("localhost","11211");   //连接到memcache服务器 长久连接

	//连续增加多台memcache服务器
	// $mem->addServer("http://icewater.me","11211");
	// $mem->addServer("124.11.34.56","11211");

	$mem->add("var_test","this is a test",MEMCACHE_COMPRESSED,"120");
	// $mem->add("var_test","this is a test22",MEMCACHE_COMPRESSED,"120");   //注意重复添加不会覆盖

	//如果要覆盖可以使用set方法
	$mem->set("var_test","this is a test222");   //存一个字符串

	$var = $mem->get("var_test");

	$mem->add("myarr", array("aaa","bbb","ccc","dddd"));   //存一个数组
	// $mem->delete("myarr");   //删除具体的一个值  

	$myarr = $mem->get("myarr");

	echo $var;
	echo "<br />";
	// echo $myarr;    //数组需要打印出来
	print_r($myarr);

	echo "<br />";


	//存储一个对象
	class Person{
		var $name = "zhangsah";
		var $age = "12";
	}

	$myobj = new Person();

	$mem->add("myobj", $myobj);

	// echo $mem->get("myobj");   //不能echo 一个对象

	var_dump($mem->get("myobj"));

	echo "<br />";

	//也可以读出memcache的状态(版本,....)
	echo $mem->getVersion();
	echo "<pre>";
	print_r($mem->getStats());
	echo "</pre>";

	// $mem->flush();    //清除所有

	$mem->close();  //关闭连接  这个函数不会关闭持久化连接， 持久化连接仅仅会在web服务器关机/重启时关闭 见手册


