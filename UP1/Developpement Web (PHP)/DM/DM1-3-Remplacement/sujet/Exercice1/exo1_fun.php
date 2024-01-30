<?php

function my_Calculette($nb1, $nb2, $op)
{
  $output = "";

  if (!((gettype($nb1) == gettype(0)) &&
        (gettype($nb2) == gettype(0)) &&
        (gettype($op) == gettype("lol"))))
  {
    $output = "Incorrect parameters type";
    return ($output);
  }

  if ($op == "+")
  {
    $val = $nb1 + $nb2;
  }
  elseif ($op == "-")
  {
    $val = $nb1 - $nb2;
  }
  elseif ($op == "*")
  {
    $val = $nb1 * $nb2;
  }
  elseif ($op == "/")
  {
    if ($nb2 == 0)
    {
      $output = "Division by 0 is forbidden";
      return ($output);
    }
    $val = $nb1 / $nb2;
  }
  elseif ($op == "%")
  {
    $val = $nb1 % $nb2;
  }
  else
  {
    $output = "Unknown operator";
    return ($output);
  }

  $output = "$val";
  return ($output);
}

?>
