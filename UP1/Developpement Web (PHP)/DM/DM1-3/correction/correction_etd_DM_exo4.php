<html>
<body>
<center><h1>Correction DM PHP (Etudiant)</h1></center>
<br /><br />
<?php

// gameX1 - 8 : X win
// gameO1 - 8 : O win
// game_draw1 - 3 : draw
// game_err1 - 5 : error
include_once("exo4_data.php");

include_once("exo4_fun.php");
//  my_TicTacToe($game)


echo("<b>Mute Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_TicTacToe($gameX1);' . "\n\n");
$str = my_TicTacToe($gameX1);
echo('$str = my_TicTacToe($gameX2);' . "\n\n");
$str = my_TicTacToe($gameX2);
echo('$str = my_TicTacToe($gameX3);' . "\n\n");
$str = my_TicTacToe($gameX3);
echo('$str = my_TicTacToe($gameX4);' . "\n\n");
$str = my_TicTacToe($gameX4);
echo('$str = my_TicTacToe($gameX5);' . "\n\n");
$str = my_TicTacToe($gameX5);
echo('$str = my_TicTacToe($gameX6);' . "\n\n");
$str = my_TicTacToe($gameX6);
echo('$str = my_TicTacToe($gameX7);' . "\n\n");
$str = my_TicTacToe($gameX7);
echo('$str = my_TicTacToe($gameX8);' . "\n\n");
$str = my_TicTacToe($gameX8);

echo('$str = my_TicTacToe($gameO1);' . "\n\n");
$str = my_TicTacToe($gameO1);
echo('$str = my_TicTacToe($gameO2);' . "\n\n");
$str = my_TicTacToe($gameO2);
echo('$str = my_TicTacToe($gameO3);' . "\n\n");
$str = my_TicTacToe($gameO3);
echo('$str = my_TicTacToe($gameO4);' . "\n\n");
$str = my_TicTacToe($gameO4);
echo('$str = my_TicTacToe($gameO5);' . "\n\n");
$str = my_TicTacToe($gameO5);
echo('$str = my_TicTacToe($gameO6);' . "\n\n");
$str = my_TicTacToe($gameO6);
echo('$str = my_TicTacToe($gameO7);' . "\n\n");
$str = my_TicTacToe($gameO7);
echo('$str = my_TicTacToe($gameO8);' . "\n\n");
$str = my_TicTacToe($gameO8);

echo('$str = my_TicTacToe($game_draw1);' . "\n\n");
$str = my_TicTacToe($game_draw1);
echo('$str = my_TicTacToe($game_draw2);' . "\n\n");
$str = my_TicTacToe($game_draw2);
echo('$str = my_TicTacToe($game_draw3);' . "\n\n");
$str = my_TicTacToe($game_draw3);

echo('$str = my_TicTacToe($game_err1);' . "\n\n");
$str = my_TicTacToe($game_err1);
echo('$str = my_TicTacToe($game_err2);' . "\n\n");
$str = my_TicTacToe($game_err2);
echo('$str = my_TicTacToe($game_err3);' . "\n\n");
$str = my_TicTacToe($game_err3);
echo('$str = my_TicTacToe($game_err4);' . "\n\n");
$str = my_TicTacToe($game_err4);
echo('$str = my_TicTacToe($game_err5);' . "\n\n");
$str = my_TicTacToe($game_err5);

echo('</textarea>');


echo("<br /><br /><b>Normal Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_TicTacToe($gameX1);' . "\n\n");
$str = my_TicTacToe($gameX1);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX2);' . "\n\n");
$str = my_TicTacToe($gameX2);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX3);' . "\n\n");
$str = my_TicTacToe($gameX3);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX4);' . "\n\n");
$str = my_TicTacToe($gameX4);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX5);' . "\n\n");
$str = my_TicTacToe($gameX5);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX6);' . "\n\n");
$str = my_TicTacToe($gameX6);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX7);' . "\n\n");
$str = my_TicTacToe($gameX7);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameX8);' . "\n\n");
$str = my_TicTacToe($gameX8);
echo($str . "\n\n");

echo('$str = my_TicTacToe($gameO1);' . "\n\n");
$str = my_TicTacToe($gameO1);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO2);' . "\n\n");
$str = my_TicTacToe($gameO2);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO3);' . "\n\n");
$str = my_TicTacToe($gameO3);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO4);' . "\n\n");
$str = my_TicTacToe($gameO4);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO5);' . "\n\n");
$str = my_TicTacToe($gameO5);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO6);' . "\n\n");
$str = my_TicTacToe($gameO6);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO7);' . "\n\n");
$str = my_TicTacToe($gameO7);
echo($str . "\n\n");
echo('$str = my_TicTacToe($gameO8);' . "\n\n");
$str = my_TicTacToe($gameO8);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>Error Run Tests :</b><br />");

echo('<textarea cols="80" rows="25" readonly="readonly">');

echo('$str = my_TicTacToe($game_draw1);' . "\n\n");
$str = my_TicTacToe($game_draw1);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_draw2);' . "\n\n");
$str = my_TicTacToe($game_draw2);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_draw3);' . "\n\n");
$str = my_TicTacToe($game_draw3);
echo($str . "\n\n");

echo('$str = my_TicTacToe($game_err1);' . "\n\n");
$str = my_TicTacToe($game_err1);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_err2);' . "\n\n");
$str = my_TicTacToe($game_err2);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_err3);' . "\n\n");
$str = my_TicTacToe($game_err3);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_err4);' . "\n\n");
$str = my_TicTacToe($game_err4);
echo($str . "\n\n");
echo('$str = my_TicTacToe($game_err5);' . "\n\n");
$str = my_TicTacToe($game_err5);
echo($str . "\n\n");

echo('</textarea>');


echo("<br /><br /><b>End of Tests !</b><br />");

?>

</body>
</html>
