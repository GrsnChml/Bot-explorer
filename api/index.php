<?php
	$datos = $_GET['data'];
	$fh = fopen("prueba.txt", 'a+') or die("Se produjo un error al crear el archivo");  
	fwrite($fh, $datos."\n") or die("No se pudo escribir en el archivo");
	fclose($fh);
	echo "Se ha escrito sin problemas";
?>