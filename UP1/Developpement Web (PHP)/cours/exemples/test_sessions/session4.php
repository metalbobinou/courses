<?php
  session_start();
?>

<html>
<body>
<?php
  if (isset($_SESSION['nom']))
  {
    echo("Au revoir " . $_SESSION['nom'] . "<br /><br />");
    //unset($_SESSION['nom']);
    session_destroy();
  }
?>
Page Web 4 (session destroy)<br/><br />
<a href="session5.php">Page 5</a>
</body>
</html>
