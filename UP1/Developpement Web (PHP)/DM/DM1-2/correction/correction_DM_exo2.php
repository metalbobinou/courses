<html>
<body>
<center><h1>Correction DM PHP (Reference)</h1></center>
<br /><br />
<?php

include_once("exo2_fun_ref.php");
// my_Square($level)

echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Square(-42);' . "\n\n");
$str = my_Square(-42);
echo('$str = my_Square(-1);' . "\n\n");
$str = my_Square(-1);
echo('$str = my_Square(0);' . "\n\n");
$str = my_Square(0);
echo('$str = my_Square(1);' . "\n\n");
$str = my_Square(1);
echo('$str = my_Square(2);' . "\n\n");
$str = my_Square(2);
echo('$str = my_Square(3);' . "\n\n");
$str = my_Square(3);
echo('$str = my_Square(4);' . "\n\n");
$str = my_Square(4);
echo('$str = my_Square(5);' . "\n\n");
$str = my_Square(5);
echo('$str = my_Square(39);' . "\n\n");
$str = my_Square(39);
echo('$str = my_Square(42);' . "\n\n");
$str = my_Square(42);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Square(-42);' . "\n\n");
$str = my_Square(-42);
echo($str . "\n\n");
echo('$str = my_Square(-1);' . "\n\n");
$str = my_Square(-1);
echo($str . "\n\n");
echo('$str = my_Square(0);' . "\n\n");
$str = my_Square(0);
echo($str . "\n\n");
echo('$str = my_Square(1);' . "\n\n");
$str = my_Square(1);
echo($str . "\n\n");
echo('$str = my_Square(2);' . "\n\n");
$str = my_Square(2);
echo($str . "\n\n");
echo('$str = my_Square(3);' . "\n\n");
$str = my_Square(3);
echo($str . "\n\n");
echo('$str = my_Square(4);' . "\n\n");
$str = my_Square(4);
echo($str . "\n\n");
echo('$str = my_Square(5);' . "\n\n");
$str = my_Square(5);
echo($str . "\n\n");
echo('$str = my_Square(39);' . "\n\n");
$str = my_Square(39);
echo($str . "\n\n");
echo('$str = my_Square(42);' . "\n\n");
$str = my_Square(42);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
