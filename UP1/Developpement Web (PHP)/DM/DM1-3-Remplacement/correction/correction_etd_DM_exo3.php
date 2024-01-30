<html>
<body>
<center><h1>Correction DM PHP (Etudiant)</h1></center>
<br /><br />
<?php

include_once("exo3_data.php");

include_once("exo3_fun.php");
// my_CalculTVA($input_table)

echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_CalculTVA($data);' . "\n\n");
$str = my_CalculTVA($data);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_CalculTVA($data);' . "\n\n");
$str = my_CalculTVA($data);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
