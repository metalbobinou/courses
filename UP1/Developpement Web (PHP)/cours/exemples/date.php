<html>
<body>
Yopla Boum
<br />

<ul>

<?php

$var = 42;
  echo("Double quote : $var <br />");
  echo('Simple quote : $var <br />');
  
$lol = "10" + "4.2";

echo $lol;
echo "<br />";
echo gettype($lol) . "   $lol";

echo "<br/>";
echo "<br/>";



$tableau[0] = "A";
$tableau[1] = "B";
$tableau[3] = "Fin";
$tableau[] = "Suite";

echo $tableau . "<br /><br />";

for ($num = 0; $num < 5; $num++)
{
	echo $tableau[$num] . '<br />';
}

echo "<br/>";
echo "<br/>";

$date = new DateTime('2000-01-05');

echo date_format($date, "m");


echo "<br/>";
echo "<br/>";

$lol = 42;
if ($lol === "  42 ")
{
	echo "OUIIIII";
}
else	
{
	echo "nop";
}

$var = 1;
 echo "<li>" . "Hello World !" . $var++ . "</li>";
 echo "
";
 echo "<li>" . "Hello World !" . $var++ . "</li>";
 echo "<br /><br /><br />";
 echo "<li>" . "Hello World !" . $var++ . "</li>";

?>

</ul>

		</body></html>
		
