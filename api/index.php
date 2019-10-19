<?php
    require_once 'connection.php';
    
	$datos = $_GET['data'];

	$info = explode(';', $datos);

    $sql = "INSERT INTO 
    sensor () 
    VALUES (null,'$info[0]','$info[1]','$info[2]');";

    if (mysqli_query($mysqli, $sql)) {
        echo "New record created successfully";
    } else {
            echo "Error: " . $sql . "<br>" . mysqli_error($mysqli);
    }
?>
