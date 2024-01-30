<?php

function my_Sapin($level)
{
  $output = "";
  if ($level < 1)
  {
    $output = "/\\" . "\n";
    $output = $output . "||" . "\n";
    return ($output);
  }

  // Build triangle
  for ($cur_level = 0; $cur_level < ($level + 1); $cur_level++)
  {
    // Refill left space
    $LEFT_SPACE = "";
    for ($tmp_level = $cur_level; $tmp_level < $level; $tmp_level++)
    {
      $LEFT_SPACE = " " . $LEFT_SPACE;
    }

    // Refill middle space
    $MIDDLE_SPACE = "";
    for ($tmp_level = 0; $tmp_level < ($cur_level * 2); $tmp_level++)
    {
      $MIDDLE_SPACE = " ". $MIDDLE_SPACE;
    }

    $output = $output . $LEFT_SPACE . "/" . $MIDDLE_SPACE . "\\" . "\n";
  }

  // Build base
  $BASE = "";
  for ($cur_level = 0; $cur_level < (($level + 1) * 2); $cur_level++)
  {
    $BASE = "_" . $BASE;
  }

 $output = $output . $BASE . "\n";

 // Build trunk
 $SPACE = "";
 for ($cur_level = 0; $cur_level < $level; $cur_level++)
 {
   $SPACE = " " . $SPACE;
 }

  $output = $output . $SPACE . "||" . "\n";

  return ($output);
}

?>
