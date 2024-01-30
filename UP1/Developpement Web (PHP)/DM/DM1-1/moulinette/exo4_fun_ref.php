<?php

function my_TicTacToe($game)
{
  // Check if table contains only "X" and "O"
  foreach($game as $id_line => $line)
  {
    foreach($line as $id_col => $col)
    {
      if (! (($col == "X") || ($col == "O")))
      {
        return("Incorrect game");
      }
    }
  }

  $output = PrintGame($game);

  $tmp_out = WhoWin($game);
  $output = $output . $tmp_out;
  return ($output);
}

function PrintGame($game)
{
  $output = "";

  // Print each column
  for ($i = 0; $i < 3; $i++)
  {
    //echo("Line " . $i . " : ");
    //echo($game[$i][0] . $game[$i][1] . $game[$i][2] . "\n");
    $output = $output . $game[$i][0] . $game[$i][1] . $game[$i][2] . "\n";
  }

  return ($output);
}

function WhoWin($game)
{
  // Test de reussite depuis la case centrale
  if ((($game[1][1] == $game[0][1]) && ($game[1][1] == $game[2][1])) ||
     (($game[1][1] == $game[1][0]) && ($game[1][1] == $game[1][2])) ||
     (($game[1][1] == $game[0][0]) && ($game[1][1] == $game[2][2])) ||
     (($game[1][1] == $game[0][2]) && ($game[1][1] == $game[2][0])))
  {
    //echo("Detection avec Croix\n");
    return("Player " . $game[1][1] . " won");
  }

  // Test de reussite depuis coin superieur gauche
  if ((($game[0][0] == $game[0][1]) && ($game[0][0] == $game[0][2])) ||
      (($game[0][0] == $game[1][0]) && ($game[0][0] == $game[2][0])))
  {
    //echo("Detection avec Coin Sup Gauche\n");
    return("Player " . $game[0][0] . " won");
  }

  // Test de reussite depuis coin inferieur droit
  if ((($game[2][2] == $game[1][2]) && ($game[2][2] == $game[0][2])) ||
      (($game[2][2] == $game[2][1]) && ($game[2][2] == $game[2][0])))
  {
    //echo("Detection avec Coin Inf Droit\n");
    return("Player " . $game[2][2] . " won");
  }

  // Aucun gagnant...
  return("It's a draw");
}

?>
