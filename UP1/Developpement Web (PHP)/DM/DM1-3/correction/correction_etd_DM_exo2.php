<html>
<body>
<center><h1>Correction DM PHP (Etudiant)</h1></center>
<br /><br />
<?php

include_once("exo2_fun.php");
// my_Sapin($level)

echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Sapin(-42);' . "\n\n");
$str = my_Sapin(-42);
echo('$str = my_Sapin(-1);' . "\n\n");
$str = my_Sapin(-1);
echo('$str = my_Sapin(0);' . "\n\n");
$str = my_Sapin(0);
echo('$str = my_Sapin(1);' . "\n\n");
$str = my_Sapin(1);
echo('$str = my_Sapin(2);' . "\n\n");
$str = my_Sapin(2);
echo('$str = my_Sapin(3);' . "\n\n");
$str = my_Sapin(3);
echo('$str = my_Sapin(4);' . "\n\n");
$str = my_Sapin(4);
echo('$str = my_Sapin(5);' . "\n\n");
$str = my_Sapin(5);
echo('$str = my_Sapin(39);' . "\n\n");
$str = my_Sapin(39);
echo('$str = my_Sapin(42);' . "\n\n");
$str = my_Sapin(42);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Sapin(-42);' . "\n\n");
$str = my_Sapin(-42);
echo($str . "\n\n");
echo('$str = my_Sapin(-1);' . "\n\n");
$str = my_Sapin(-1);
echo($str . "\n\n");
echo('$str = my_Sapin(0);' . "\n\n");
$str = my_Sapin(0);
echo($str . "\n\n");
echo('$str = my_Sapin(1);' . "\n\n");
$str = my_Sapin(1);
echo($str . "\n\n");
echo('$str = my_Sapin(2);' . "\n\n");
$str = my_Sapin(2);
echo($str . "\n\n");
echo('$str = my_Sapin(3);' . "\n\n");
$str = my_Sapin(3);
echo($str . "\n\n");
echo('$str = my_Sapin(4);' . "\n\n");
$str = my_Sapin(4);
echo($str . "\n\n");
echo('$str = my_Sapin(5);' . "\n\n");
$str = my_Sapin(5);
echo($str . "\n\n");
echo('$str = my_Sapin(39);' . "\n\n");
$str = my_Sapin(39);
echo($str . "\n\n");
echo('$str = my_Sapin(42);' . "\n\n");
$str = my_Sapin(42);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
