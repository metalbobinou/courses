<?php

session_start();
?>
<html>
<?php
echo "On dispose de : <br/><br/>";

$len = count($_SESSION["panier_produits"]);

for ($i = 0; $i < $len; $i++)
{
	echo "$i : ";
	echo $_SESSION["panier_produits"][$i];
	echo "   ";
	echo $_SESSION["panier_qte"][$i];
	echo "<br/>";
}
?>


</html>