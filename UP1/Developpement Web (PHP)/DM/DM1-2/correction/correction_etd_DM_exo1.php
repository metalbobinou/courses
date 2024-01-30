<html>
<body>
<center><h1>Correction DM PHP (Etudiant)</h1></center>
<br /><br />
<?php

include_once("exo1_fun.php");
// my_Calculette($nb1, $nb2, $op)

echo("<b>Mute Tests :</b><br />");

echo('$str = my_Calculette(42, 13, "+");' . "<br />");
$str = my_Calculette(42, 13, "+");
echo('$str = my_Calculette(42, 13, "-");' . "<br />");
$str = my_Calculette(42, 13, "-");
echo('$str = my_Calculette(42, 13, "/");' . "<br />");
$str = my_Calculette(42, 13, "/");
echo('$str = my_Calculette(42, 13, "*");' . "<br />");
$str = my_Calculette(42, 13, "*");
echo('$str = my_Calculette(42, 13, "%");' . "<br />");
$str = my_Calculette(42, 13, "%");

echo('$str = my_Calculette(42, 0, "+");' . "<br />");
$str = my_Calculette(42, 0, "+");
echo('$str = my_Calculette(42, 0, "-");' . "<br />");
$str = my_Calculette(42, 0, "-");
echo('$str = my_Calculette(42, 0, "/");' . "<br />");
$str = my_Calculette(42, 0, "/");
echo('$str = my_Calculette(42, 0, "*");' . "<br />");
$str = my_Calculette(42, 0, "*");
//echo('$str = my_Calculette(42, 0, "%");' . "<br />");
//$str = my_Calculette(42, 0, "%");

echo('$str = my_Calculette(42, 13, "A");' . "<br />");
$str = my_Calculette(42, 13, "A");
echo('$str = my_Calculette(42, 0, "B");' . "<br />");
$str = my_Calculette(42, 0, "B");
echo('$str = my_Calculette("C", 0, 0);' . "<br />");
$str = my_Calculette("C", 0, 0);

echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('$str = my_Calculette(42, 13, "+");' . "<br />");
$str = my_Calculette(42, 13, "+");
echo($str . "<br />");
echo('$str = my_Calculette(42, 13, "-");' . "<br />");
$str = my_Calculette(42, 13, "-");
echo($str . "<br />");
echo('$str = my_Calculette(42, 13, "/");' . "<br />");
$str = my_Calculette(42, 13, "/");
echo($str . "<br />");
echo('$str = my_Calculette(42, 13, "*");' . "<br />");
$str = my_Calculette(42, 13, "*");
echo($str . "<br />");
echo('$str = my_Calculette(42, 13, "%");' . "<br />");
$str = my_Calculette(42, 13, "%");
echo($str . "<br />");


echo("<br /><br /><b>Error Run Tests :</b><br />");

echo('$str = my_Calculette(42, 0, "+");' . "<br />");
$str = my_Calculette(42, 0, "+");
echo($str . "<br />");
echo('$str = my_Calculette(42, 0, "-");' . "<br />");
$str = my_Calculette(42, 0, "-");
echo($str . "<br />");
echo('$str = my_Calculette(42, 0, "/");' . "<br />");
$str = my_Calculette(42, 0, "/");
echo($str . "<br />");
echo('$str = my_Calculette(42, 0, "*");' . "<br />");
$str = my_Calculette(42, 0, "*");
echo($str . "<br />");
//echo('$str = my_Calculette(42, 0, "%");' . "<br />");
//$str = my_Calculette(42, 0, "%");
//echo($str . "<br />");

echo('$str = my_Calculette(42, 13, "A");' . "<br />");
$str = my_Calculette(42, 13, "A");
echo($str . "<br />");
echo('$str = my_Calculette(42, 0, "B");' . "<br />");
$str = my_Calculette(42, 0, "B");
echo($str . "<br />");
echo('$str = my_Calculette("C", 0, 0);' . "<br />");
$str = my_Calculette("C", 0, 0);
echo($str . "<br />");

echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
