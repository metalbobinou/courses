<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
<title>Exercice 2</title>
<style>
textarea {font-family: monospace;}
</style>
</head>
<body>
<center>Exercice 2</center>
<br /><br />
<textarea cols="80" rows="25" readonly="readonly">
<?php
  require_once("exo2_fun.php");
  $my_text = my_Square(0);
  echo($my_text);
?>
</textarea>
</body>
</html>
