<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>SENSORES</title>
    <style>
    table, th, td {
  border: 1px solid black;
}
    </style>
</head>
    <body>
    <center>
        <table>
        <tr>
    <th>Temperatura</th>
    <th>Distancia</th>
    <th>Oxigeno</th>
    <th>Humedad</th>
    <th>Lluvia</th>
  </tr>
<?php
    require_once 'connection.php';
    $query = "SELECT * FROM sensor";
    $result = $mysqli->query($query);
    if ($result->num_rows > 0) {
        
        while($row = $result->fetch_assoc()) {
            echo "<tr><td>".$row["temperatura"]."</td><td>".$row["distancia"]."</td><td>". $row["oxigeno"]."</td> <td>". $row["humedad"]."</td> <td>". $row["lluvia"]."</td>";
        }
        
    } else {
        echo "0 results";
    }
    $mysqli->close();
?>
        </table>
    </center>
    </body>
</html>
