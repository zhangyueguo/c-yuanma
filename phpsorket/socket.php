<?php
//确保在连接客户端时不会超时
set_time_limit(0);

$ip = '127.0.0.1';
$port = 1935;

/*
 +-------------------------------
 *  @socket通信整个过程
 +-------------------------------
 *  @socket_create    产生一个socket 相当于产生一个socket的数据接口
 *  @socket_bind     把socket 绑在一个ip 和 端口上
 *  @socket_listen   监听由指定socket的所有连接
 *  @socket_accept   接受一个socket的连接
 *  @socket_read     读取指定长度的数据
 *  @socket_write   写数据到socket缓存
 *  @socket_close   关闭一个socket资源
 +--------------------------------
 */

/*----------------  以下操作都是手册上的  -------------------*/
if(($sock = socket_create(AF_INET,SOCK_STREAM,SOL_TCP)) < 0) {
    echo "socket_create() 失败的原因是:".socket_strerror($sock)."\n";
}

if(($ret = socket_bind($sock,$ip,$port)) < 0) {
    echo "socket_bind() 失败的原因是:".socket_strerror($ret)."\n";
}

if(($ret = socket_listen($sock,4)) < 0) {
    echo "socket_listen() 失败的原因是:".socket_strerror($ret)."\n";
}

$count = 0;

do {
    if (($msgsock = socket_accept($sock)) < 0) {
        echo "socket_accept() failed: reason: " . socket_strerror($msgsock) . "\n";
        break;
    } else {

        //发到客户端
        $msg ="测试成功！\n";
        socket_write($msgsock, $msg, strlen($msg));

        echo "测试成功了啊\n";
        $buf = socket_read($msgsock,8192);


        $talkback = "收到的信息:$buf\n";
        echo $talkback;

        if(++$count >= 5){
            break;
        };


    }
    //echo $buf;
    socket_close($msgsock);

} while (true);

socket_close($sock);
//这是socket的服务端的代码，注意运行cmd  注意自己程序的存放路径   执行  php socket.php    没反应在执行 netstat -ano    可以查看对应的端口情况
?>