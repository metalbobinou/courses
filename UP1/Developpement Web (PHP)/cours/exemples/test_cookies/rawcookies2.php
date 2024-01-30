<html>
<body>
<?php
  if (isset($_COOKIE['MonCookie1']))
  { echo("MonCookie " . $_COOKIE['MonCookie1'] . "<br /><br />"); }
  if (isset($_COOKIE['MonCookie2']))
  { echo("MonCookie " . $_COOKIE['MonCookie2'] . "<br /><br />"); }
  if (isset($_COOKIE['MonCookie3']))
  { echo("MonCookie " . $_COOKIE['MonCookie3'] . "<br /><br />"); }
  if (isset($_COOKIE['MonRawCookie1']))
  { echo("MonRawCookie1 " . $_COOKIE['MonRawCookie1'] . "<br /><br />"); }
  if (isset($_COOKIE['MonRawCookie2']))
  { echo("MonRawCookie2 " . $_COOKIE['MonRawCookie2'] . "<br /><br />"); }
  if (isset($_COOKIE['MonRawCookie3']))
  { echo("MonRawCookie2 " . $_COOKIE['MonRawCookie3'] . "<br /><br />"); }
?>
Page Web 2<br />
Cookie1 'Fabrice/haha \ohoh' <br />
Cookie2 'Fabrice/haha \ohoh' <br />
Cookie3 'Fabrice%haha%ohoh' <br />
RawCookie1 'Fabricehahaohoh'<br/>
RawCookie2 'Fabrice/haha \ohoh'<br/>
RawCookie3 'Fabrice%haha%ohoh'<br/><br />
</body>
</html>
