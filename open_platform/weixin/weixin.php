<?php 
/* ****************网址接入******** */
	//获取微信get请求的四个数据
	$signature = $_GET["signature"];   //微信加密签名   结合 token参数和请求中的timestamp参数、nonce参数得到
    $timestamp = $_GET["timestamp"];   //时间戳
    $nonce = $_GET["nonce"];	       //随机数

    // echo $signature;
     //获取随机字符串 作为确认为微信的get请求后 返回给微信字符串
    $echoStr = $_GET["echostr"];      

    //输入自己的TOKEN
   
    // $token = "icewater";
    $token = "ericky";

    //获取到的 token timestamp nonce 放到数组中,便于操作
    $tmpArr = array($token, $timestamp, $nonce);

    //加密流程如下：
    //将token、timestamp、nonce三个参数进行字典序排序
    sort($tmpArr);

    //将三个参数字符串拼接成一个字符串 
    $tmpStr = implode( $tmpArr );   //join函数的别名
    
    //进行sha1加密
    $tmpStr = sha1( $tmpStr );   

    //校验流程 将加密后的数据与之前get请求到的数据$signature进行比对
    if( $tmpStr == $signature ){
    	echo $echoStr;
    }
    // echo "此文件可以访问...";

/***************** 微信post 数据的处理********************** */

	//获取个人用户给公众平台发送的信息 (xml字符串的形式)
	$postStr = $GLOBALS["HTTP_RAW_POST_DATA"];

	if(!empty($postStr)){
		//将字符串处理程序xml对象
		// $xmlObj = simplexml_load_string($data,'SimpleXMLElement',LIBXML_NOCDATA );
        $xmlObj = simplexml_load_string($postStr,'SimpleXMLElement',LIBXML_NOCDATA);    //注意这里的第一个参数应为:$postStr 以$GLOBALS["HTTP_RAW_POST_DATA"];获取的一个xml字符串
		//通过这个对象,获取对象中的属性  (查看微信的api文档)
		$to_user = $xmlObj->ToUserName;		//开发者微信号
		$from_user = $xmlObj->FromUserName; // 发送方帐号（一个OpenID）
		$create_time = $xmlObj->CreateTime; // 消息创建时间 （整型）
		$type = $xmlObj->MsgType; //消息类型
		$content = $xmlObj->Content;  //文本消息内容
		$msg_id = $xmlObj->MsgId;  //消息id，64位整型
	}

/*********************将处理的数据插入到数据库******************************************/
    include "./db_config.php";
    try{

        if ($type == "text") {     //如果类型是文本才可往数据库中插入数据
           
            $dsn = "mysql:dbname=".DB_NAME.";host=".DB_HOST;
            $pdo = new PDO( $dsn, DB_USER, DB_PASSWORD,array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION) );   //建立数据库连接

            //数据库连接测试
            /*if($pdo){
                echo "success!";
            }else{
                die ("mysql connected failed");
            }*/

            $pdo->query("set names utf8");  //设置查询字符集

            // $pdo->setAttribute(PDO::MYSQL_ATTR_USE_BUFFERED_QUERY,true);  //清空查询缓存
            // $pdo->exec("delete from weixin_test");  //删除数据库表

            //组装sql语句
            $sql = "insert into weixin_test(id, to_user, from_user, create_time, content) values('$msg_id', '$to_user', '$from_user', '$create_time', '$content')";
            // $sql = "insert into weixin_test(id, to_user, from_user, create_time, content) values('1', 'to_test', 'from_test', '123456778', 'This is a test!')";

            //使用PDO发送sql
            $pdo->exec($sql);
        }

    }catch(PDOException $e){
        exit($e->getMessage());
    }






