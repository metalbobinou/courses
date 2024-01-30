<html>
<body>
<center><h1>Correction DM PHP (Reference)</h1></center>
<br /><br />
<?php

include_once("exo3_data.php");

include_once("exo3_fun_ref.php");
// my_Reduction($data, 33)

echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Reduction($data, 33);' . "\n\n");
$str = my_Reduction($data, 33);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Reduction($data, 33);' . "\n\n");
$str = my_Reduction($data, 33);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
