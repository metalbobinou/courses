<?php

function my_Square($size)
{
  $output = "";
  if ($size < 1)
  {
    $output = "." . "\n";
    return ($output);
  }

  // Build square

  // Build top and bottom
  $base = "";
  for ($cur_size = 0; $cur_size < $size; $cur_size++)
  {
    $base = $base . "#";
  }
  $base = $base . "\n";

  // If more than 1 floor, calculate content
  if ($size > 1)
  {
    // Add top
    $output = $output . $base;

    // Calculate content
    $content = "";
    for ($cur_line = 1; $cur_line < ($size - 1); $cur_line++)
    {
      $line = "#";
      for ($cur_size = 1; $cur_size < ($size - 1); $cur_size++)
      {
	$line = $line . " ";
      }
      $line = $line . "#" . "\n";

      $content = $content . $line;
    }
    $output = $output . $content;
  }

  // Add bottom
  $output = $output . $base;

  return ($output);
}

?>
