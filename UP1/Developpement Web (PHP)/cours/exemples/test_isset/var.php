<?php
$a = 1;
$b = 2;
function somme($a, $b)
{
//   global $a, $b;
   $b = $a + $b;
   echo("(somme) b : " . $b);
   echo "<br />";

  if (0 == 0)
  {
    $c = 42;
  }

  echo("c : " . $c);
}

somme($a, $b);
echo("<br />");
echo("(hors somme) b : " . $b);
?>
