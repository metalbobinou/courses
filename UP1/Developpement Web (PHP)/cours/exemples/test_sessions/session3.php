<?php
  session_start();
?>

<html>
<body>
<?php
  if (isset($_SESSION['nom']))
  {
    echo("Coucou " . $_SESSION['nom'] . "<br /><br />");
  }
?>
Page Web 3 (echo Session['nom'])<br/><br />
<a href="session4.php">Page 4</a>
</body>
</html>
