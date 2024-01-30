<?php
  setcookie('MonCookie1', 'Fabricehahaohoh', time()+3600*24);
  setcookie('MonCookie2', 'Fabrice/haha \ohoh', time()+3600*24);
  setcookie('MonCookie3', 'Fabrice%haha%ohoh', time()+3600*24);
  setrawcookie('MonRawCookie1', 'Fabricehahaohoh', time()+3600*24);
  setrawcookie('MonRawCookie2', 'Fabrice/haha \ohoh', time()+3600*24);
  setrawcookie('MonRawCookie3', 'Fabrice%haha%ohoh', time()+3600*24);
?>

<html>
<body>
Page Web 1<br />
Cookie1 'Fabrice/haha \ohoh' <br />
Cookie2 'Fabrice/haha \ohoh' <br />
Cookie3 'Fabrice%haha%ohoh' <br />
RawCookie1 'Fabricehahaohoh'<br/>
RawCookie2 'Fabrice/haha \ohoh'<br/>
RawCookie3 'Fabrice%haha%ohoh'<br/><br />
<a href="rawcookies2.php">Page 2</a>
</body>
</html>