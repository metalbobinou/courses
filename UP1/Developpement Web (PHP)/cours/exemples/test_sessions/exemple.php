<?php

session_start();

$produits = array();
$qte = array();

echo "On ajoute des pommes<br/>";

$produits[] = "pommes";
$qte[] = 4;


echo "On ajoute des ordinateurs<br/>";

$produits[] = "ordinateurs";
$qte[] = 2;

$_SESSION["panier_produits"] = $produits;
$_SESSION["panier_qte"] = $qte;


?>


<html>
<a href="exemple2.php">Suite</a>
</html>