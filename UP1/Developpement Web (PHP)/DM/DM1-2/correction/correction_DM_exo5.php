<html>
<body>
<center><h1>Correction DM PHP (Reference)</h1></center>
<br /><br />
<?php

include_once("exo5_data.php");
include_once("exo5_listeref.php");

include_once("exo5_fun_ref.php");
// my_Loginisation($ReferenceList, $RequestList);

echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Loginisation($ReferenceList, $RequestList);' . "\n\n");
$str = my_Loginisation($ReferenceList, $RequestList);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_Loginisation($ReferenceList, $RequestList);' . "\n\n");
$str = my_Loginisation($ReferenceList, $RequestList);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
