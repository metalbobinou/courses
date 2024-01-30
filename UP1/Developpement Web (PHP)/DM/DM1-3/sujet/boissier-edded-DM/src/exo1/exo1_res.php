<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
<title>Exercice 1</title>
<style>
textarea {font-family: monospace;}
</style>
</head>
<body>
<center>Exercice 1</center>
<br /><br />
<textarea cols="80" rows="25" readonly="readonly">
<?php
  require_once("exo1_fun.php");
  $my_text = my_Calculette(38, 42, "/");
  echo($my_text);
?>
</textarea>
</body>
</html>
