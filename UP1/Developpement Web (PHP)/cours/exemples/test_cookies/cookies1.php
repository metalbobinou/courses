<?php
  session_start();
  setcookie('prenom', 'Fab', time()+3600*24);
?>

<html>
<body>
Page Web 1 (session cookies start)<br/><br />
<a href="cookies2.php">Page 2</a>
</body>
</html>
