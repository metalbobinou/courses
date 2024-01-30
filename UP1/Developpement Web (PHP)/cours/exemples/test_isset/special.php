<html><head>
<title>Special Chars</title>
</head><body>
    <?php

  $var1 = "Ceci est un texte <b>en gras</b> avec retour a la ligne<br />";

  $var2 = htmlspecialchars($var1);

  echo($var1);
  echo("<br /<br />");
  echo($var2);
?>
</body></html>
