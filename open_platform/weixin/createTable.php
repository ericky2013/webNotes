<?php 
	include "./db_config.php";

	try{  
			//建立数据库连接
	        $dsn = "mysql:dbname=".DB_NAME.";host=".DB_HOST;
	        $pdo = new PDO( $dsn, DB_USER, DB_PASSWORD,array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION) );   

	        //数据库连接测试
	        /*if($pdo){
	        	echo "success!";
	        }else{
	        	die ("mysql connected failed");
	        }*/

	        $pdo->query("set names utf8");  //设置查询字符集

	        //读取文件sql语句
	        $sql = file_get_contents("./create_table.sql");

	        //使用pdo执行sql语句
	        $stmt = $pdo->query($sql);

	        if($stmt){
	        	echo "数据表创建成功!";
	        }else{
	        	echo "数据表创建失败!";
	        }

        }catch(PDOException $e){
       		 exit($e->getMessage());
	    }



