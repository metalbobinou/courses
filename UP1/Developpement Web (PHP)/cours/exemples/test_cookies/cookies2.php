<?php
  session_start();
  $_SESSION['nom'] = "Boissier";
  setrawcookie('MonRawCookie', 'valeurCookie', time()+3600*24);
?>

<html>
<body>
Page Web 2 (session['nom'] = Moi + RawCookie)<br/><br />
<a href="cookies3.php">Page 3</a>
</body>
</html>
