<?php 

header('Content-Transfer-Encoding: Binary');
// ** getLocation
$action = $_GET["action"];
$location = $_GET["location"];




$localhost = "myIP";
$my_user = "myUser";
$my_password = "myPass";
$my_db =  "lightdb";


$con = mysqli_connect($localhost,$my_user,$my_password,$my_db);
// Check connection
if (mysqli_connect_errno())
	echo "Failed to connect to MySQL: " . mysqli_connect_error();

mysqli_set_charset($con,"utf8");


if($action === "getLocation"){
	$result = mysqli_query($con,"SELECT DISTINCT  location FROM light3");
}
else{
	$result = mysqli_query($con,"SELECT * FROM light3 WHERE location="+$location );
}

$out = [];
$i = 0;
while ( $row=mysqli_fetch_array($result) ) {
	$out[$i] = $row;
	$i++;
}
print json_encode($out);

mysqli_close($con);
?>