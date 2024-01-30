<?php

  if (isset($_SESSION['nom']))
  { echo("Session est encore la<br />"); }
  if (isset($_COOKIE['prenom']))
  { echo("Cookie prenom est toujours la<br/>"); }
  if (isset($_COOKIE['MonRawCookie']))
  { echo("Cookie MonRawCookie existe toujours<br/>"); }

  echo("Nom (session) : " . $_SESSION['nom'] . "<br />");
  echo("Prenom (cookie) : " . $_COOKIE['prenom'] . "<br />");
  echo("RawCookie (cookie) : " . $_COOKIE['MonRawCookie'] . "<br />");
?>

<html>
<body>
Page Web 5 (no session)<br/><br />
<a href="cookies6.php">Page 6</a>
</body>
</html>
