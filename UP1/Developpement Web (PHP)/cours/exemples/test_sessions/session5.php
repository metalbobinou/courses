<?php

if (isset($_SESSION['nom']))
{
  echo("Session est encore la<br />");
}

  echo("Nom (session) : " . $_SESSION['nom'] . "<br />");

?>

<html>
<body>
Page Web 5 (no session)<br/><br />
<a href="session6.php">Page 6</a>
</body>
</html>
