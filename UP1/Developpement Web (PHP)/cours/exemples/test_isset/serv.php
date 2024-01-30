<html><head>
<title>La variable $_SERVER</title>
</head><body>
<?php
echo 'Nom du fichier en cours d\'execution ' . 
	'a partir de la racine : ' . $_SERVER['PHP_SELF'];
echo '<br/>' ;
echo 'Nom de la racine du script : ' . $_SERVER['DOCUMENT_ROOT'] ;
echo '<br/>';
echo 'Nom du client HTML : ' . $_SERVER['HTTP_USER_AGENT'] . '<br>';
echo 'Nom du serveur qui execute le script : ' . $_SERVER['SERVER_NAME'] ;
echo '<br/><br/>';
echo 'Votre adresse IP est : ' . $_SERVER['REMOTE_ADDR'] ;
?>
</body></html>
