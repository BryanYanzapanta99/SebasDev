<?php
$liga = $_POST['liga'];
$numberVocalia = $_POST['numberVocalia'];
$lugar = $_POST['lugar'];
$date = $_POST['date'];
$hour = $_POST['hour'];
$categoria = $_POST['categoria'];
$arbitro = $_POST['arbitro'];
$vocal = $_POST['vocal'];
$equipo1 = $_POST['team1'];
$equipo2 = $_POST['team2'];

if (!empty($liga) || !empty($numberVocalia) 
|| !empty($lugar) || !empty($date) 
|| !empty($hour) || !empty($categoria) 
|| !empty($arbitro) || !empty($vocal) || !empty($equipo1 ) || !empty($equipo2 )) {
    
    $host = "localhost";
    $dbusername  = "root";
    $dbpassword  = "";
    $dbname = "vocalia";



}
