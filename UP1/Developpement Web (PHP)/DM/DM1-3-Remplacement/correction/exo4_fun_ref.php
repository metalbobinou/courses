<?php

function my_Transposee($matrix)
{
  // Check if matrix is empty
  if (TestEmpty($matrix))
  {
    return("Empty matrix\n");
  }

  // Check if table contains only "X" and "O"
  foreach($matrix as $id_line => $line)
  {
    foreach($line as $id_col => $cell)
    {
      if (gettype($cell) != "integer")
      {
        return("Incorrect matrix\n");
      }
    }
  }

  $transpose = Transpose($matrix);
  $output = MatrixToString($transpose);
  return ($output);
}

function TestEmpty($matrix)
{
  if (! isset($matrix))
    return (true);

  if (sizeof($matrix) == 0)
    return (true);

  $empty = true;
  $len = sizeof($matrix);
  for ($i = 0; $i < $len; $i++)
  {
    if (sizeof($matrix[$i]) != 0)
    {
      $empty = false;
      //return (false);
    }
  }
  return ($empty);
}

// Matrix not empty && same size everywhere
function Transpose($matrix)
{
  $out_matrix = array();

  $lines = sizeof($matrix);
  $cols = sizeof($matrix[0]);
  // Print each column
  for ($c = 0; $c < $cols; $c++)
  {
    $tmp_line = array();
    for ($l = 0; $l < $lines; $l++)
    {
      $tmp_line[] = $matrix[$l][$c];
    }
    $out_matrix[] = $tmp_line;
  }

  return ($out_matrix);
}

function MatrixToString($matrix)
{
  $output = "";

  $lines = sizeof($matrix);
  // Print each column
  for ($l = 0; $l < $lines; $l++)
  {
    $cols = sizeof($matrix[$l]);
    for ($c = 0; $c < $cols; $c++)
    {
      $output = $output . $matrix[$l][$c];
      if ($c != ($cols - 1))
        $output = $output . ";";
    }
    $output = $output . "\n";
  }

  return ($output);
}

?>
