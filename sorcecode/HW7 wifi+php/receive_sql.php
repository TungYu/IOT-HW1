<?php
  
  $value = $_GET['value'];

  //user information
  $host = "myIP";
  $user = "myUser";
  $pass = "myPass";

  //database information
  $databaseName = "wifidb";
  $tableName = "wifi";

  //Connect to mysql database
  $con = mysql_connect($host,$user,$pass);
  $dbs = mysql_select_db($databaseName, $con);

  //Query database for data
  $result = mysql_query("insert into $tableName (data) VALUES ($value)");

  //store matrix
  if($result==1)
    echo "success";
  else
    echo "error";
?>