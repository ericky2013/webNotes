<?php 
	include "./db_config.php";


	//数据库连接测试
	/*$db=mysql_connect(DB_HOST, DB_USER, DB_PASSWORD,DB_NAME);
	if($db){
		echo "数据库连接成功!";
	}else{
		die ("mysql connected failed");
	}*/



	//尝试连接数据库
	 try{  
	        $dsn = "mysql:dbname=".DB_NAME.";host=".DB_HOST;
	        $pdo = new PDO( $dsn, DB_USER, DB_PASSWORD,array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION) );   //建立数据库连接


	        //数据库连接测试
	        /*if($pdo){
	        	echo "success!";
	        	die();
	        }else{
	        	die ("mysql connected failed");
	        }*/


	        $pdo->query("set names utf8");  //设置查询字符集

	        $pdo->setAttribute(PDO::MYSQL_ATTR_USE_BUFFERED_QUERY,true);  //清空查询缓存
	        // $pdo->exec("delete from weixin_test");  //删除数据库表

	        //组装sql 查询语句
	        $sql = "select id, to_user, from_user, create_time, content from weixin_test";

	        $stmt = $pdo->query($sql);

	        // $stmt = $pdo->prepare($sql); //pdo预处理查询
	        // $stmt->execute();  //正式执行

	        if( !empty($stmt) ){

	        	echo "<table border='1' width='960px' style='margin:0 auto'>";
	        	echo "<tr>";
	        	echo "<th>用户MsgId</th>";
	        	echo "<th>开发者微信号</th>";
	        	echo "<th>发送方帐号（一个OpenID）</th>";
	        	echo "<th>消息创建时间 （整型）</th>";
	        	echo "<th>消息内容</th>";
	        	echo "</tr>";

	        	foreach ($stmt as $val) {

	        		echo "<tr>";
	        		echo "<td>".$val['id']."</td>";
	        		echo "<td>".$val['to_user']."</td>";
	        		echo "<td>".$val['from_user']."</td>";
	        		echo "<td>".$val['create_time']."</td>";
	        		echo "<td>".$val['content']."</td>";
	        		echo "</tr>";

	        	}

	        	echo "</table>";
	        }



        }catch(PDOException $e){
       		 exit($e->getMessage());
	    }

