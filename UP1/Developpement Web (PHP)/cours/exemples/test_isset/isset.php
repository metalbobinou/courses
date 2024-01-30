<html>
<body>
<?php

 if (empty($_POST['nom']))
 {
?>

<form action="isset.php" method="POST"> 
<input type="text" name="nom" />

<br /><br />
<input type="submit"/>
</form>

<?php

 }
else
{
  echo("POST isset : " . isset($_POST['nom']));
  echo(" empty : " . empty($_POST['nom']));
}


?>
</body>
</html>
