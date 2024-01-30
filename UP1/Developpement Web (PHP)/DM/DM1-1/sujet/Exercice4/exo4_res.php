<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
<title>Exercice 4</title>
<style>
textarea {font-family: monospace;}
</style>
</head>
<body>
<center>Exercice 4</center>
<br /><br />
<textarea cols="80" rows="25" readonly="readonly">
<?php
  require_once("exo4_data.php");
  require_once("exo4_fun.php");
  $my_text = my_TicTacToe($game);
  echo($my_text);
?>
</textarea>
</body>
</html>
