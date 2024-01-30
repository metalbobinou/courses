<?php
  session_start();
  $_SESSION['nom'] = "Moi";
?>

<html>
<body>
Page Web 2 (session['nom'] = Moi)<br/><br />
<a href="session3.php">Page 3</a>
</body>
</html>
