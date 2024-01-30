<?php

function my_Sapin($level)
{
  $output = "";
  $baton = "/";
  $batonbis = "\\";

  if ($level <= 0)
  {
        $output = "/\\ \n ||";
  }
  else
  {
      for ($i = 0; $i < $level; $i++)
      {

      }
  }

  return($output);
}

?>
