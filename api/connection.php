<?php
    $dbhost = "spaceapp.ch7oeqwewnpa.us-west-2.rds.amazonaws.com";
    $dbuser = "admin";
    $dbpass = "1234abcd";
    $db = "robot_db";
    $mysqli = mysqli_connect($dbhost,$dbuser,$dbpass,$db);
    if(!$mysqli)
    {
        die("Connection failed: " . mysqli_connect_error());
    }
?>
