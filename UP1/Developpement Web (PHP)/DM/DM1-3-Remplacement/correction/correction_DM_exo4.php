<html>
<body>
<center><h1>Correction DM PHP (Reference)</h1></center>
<br /><br />
<?php

include_once("exo4_data.php");

include_once("exo4_fun_ref.php");
//  my_Transposee($matrix)


echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Transposee($matrix1);' . "\n\n");
$str = my_Transposee($matrix1);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Transposee($matrix1);' . "\n\n");
$str = my_Transposee($matrix1);
echo($str . "\n\n");

echo('$str = my_Transposee($matrix2);' . "\n\n");
$str = my_Transposee($matrix2);
echo($str . "\n\n");

echo('$str = my_Transposee($matrix3);' . "\n\n");
$str = my_Transposee($matrix3);
echo($str . "\n\n");

echo('</textarea>');



echo("<br /><br /><b>Error Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

// Special Cases
echo('$str = my_Transposee($matrixEmpty1);' . "\n\n");
$str = my_Transposee($matrixEmpty1);
echo($str . "\n\n");

echo('$str = my_Transposee($matrixEmpty2);' . "\n\n");
$str = my_Transposee($matrixEmpty2);
echo($str . "\n\n");

// Error Cases
echo('$str = my_Transposee($matrixError1);' . "\n\n");
$str = my_Transposee($matrixError1);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
