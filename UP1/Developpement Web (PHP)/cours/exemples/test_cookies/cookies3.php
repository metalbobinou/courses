<?php
  session_start();
?>

<html>
<body>
<?php
  if (isset($_SESSION['nom']))
  { echo("Coucou " . $_SESSION['nom'] . "<br /><br />"); }
  if (isset($_COOKIE['prenom']))
  { echo("Couqui " . $_COOKIE['prenom'] . "<br /><br />"); }
  if (isset($_COOKIE['MonRawCookie']))
  { echo("Couqui Raw " . $_COOKIE['MonRawCookie'] . "<br /><br />"); }
?>
Page Web 3 (echo Session['nom'] + Cookie['prenom'] + Cookie['Raw'])<br/><br />
<a href="cookies4.php">Page 4</a>
</body>
</html>
