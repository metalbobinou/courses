<?php

// gameX1 - 8 : X win
// gameO1 - 8 : O win
// game_draw1 - 3 : draw
// game_err1 - 5 : error


// X WIN
$gameX1[0] = array("X", "X", "X"); //
$gameX1[1] = array("O", "O", "X");
$gameX1[2] = array("X", "X", "O");

$gameX2[0] = array("X", "O", "X");
$gameX2[1] = array("X", "X", "X"); //
$gameX2[2] = array("O", "X", "O");

$gameX3[0] = array("O", "X", "X");
$gameX3[1] = array("X", "O", "O");
$gameX3[2] = array("X", "X", "X"); //

                   //
$gameX4[0] = array("X", "X", "O");
$gameX4[1] = array("X", "O", "X");
$gameX4[2] = array("X", "X", "O");

                        //
$gameX5[0] = array("X", "X", "O");
$gameX5[1] = array("O", "X", "X");
$gameX5[2] = array("X", "X", "O");

                             //
$gameX6[0] = array("O", "X", "X");
$gameX6[1] = array("O", "O", "X");
$gameX6[2] = array("X", "O", "X");

                                 //
$gameX7[0] = array("O", "X", "X");
$gameX7[1] = array("O", "X", "O");
$gameX7[2] = array("X", "O", "X");

                 //
$gameX8[0] = array("X", "X", "O");
$gameX8[1] = array("O", "X", "O");
$gameX8[2] = array("X", "O", "X");


// O WIN
$gameO1[0] = array("O", "O", "O"); //
$gameO1[1] = array("X", "X", "O");
$gameO1[2] = array("O", "O", "X");

$gameO2[0] = array("O", "X", "O");
$gameO2[1] = array("O", "O", "O"); //
$gameO2[2] = array("X", "O", "X");

$gameO3[0] = array("X", "O", "O");
$gameO3[1] = array("O", "X", "X");
$gameO3[2] = array("O", "O", "O"); //

                   //
$gameO4[0] = array("O", "O", "X");
$gameO4[1] = array("O", "X", "O");
$gameO4[2] = array("O", "O", "X");

                        //
$gameO5[0] = array("O", "O", "X");
$gameO5[1] = array("X", "O", "O");
$gameO5[2] = array("O", "O", "X");

                             //
$gameO6[0] = array("X", "O", "O");
$gameO6[1] = array("X", "X", "O");
$gameO6[2] = array("O", "X", "O");

                                 //
$gameO7[0] = array("X", "O", "O");
$gameO7[1] = array("X", "O", "X");
$gameO7[2] = array("O", "X", "O");

                 //
$gameO8[0] = array("O", "O", "X");
$gameO8[1] = array("X", "O", "X");
$gameO8[2] = array("O", "X", "O");


// DRAW
$game_draw1[0] = array("X", "O", "X");
$game_draw1[1] = array("O", "O", "X");
$game_draw1[2] = array("X", "X", "O");

$game_draw2[0] = array("X", "O", "X");
$game_draw2[1] = array("O", "O", "X");
$game_draw2[2] = array("O", "X", "O");

$game_draw3[0] = array("O", "O", "X");
$game_draw3[1] = array("X", "X", "O");
$game_draw3[2] = array("O", "X", "O");


// ERROR
$game_err1[0] = array("A", "B", "C");
$game_err1[1] = array("D", "E", "F");
$game_err1[2] = array("G", "H", "I");

$game_err2[0] = array("X", "O", "A");
$game_err2[1] = array("X", "X", "O");
$game_err2[2] = array("O", "O", "X");

$game_err3[0] = array("X", "X", "X");
$game_err3[1] = array("X", "X", "O");
$game_err3[2] = array("O", "O", "A");

$game_err4[0] = array("X", "X", "X");
$game_err4[1] = array("X", "X", "O");
$game_err4[2] = array("X", "O", "A");

$game_err5[0] = array("O", "O", "O");
$game_err5[1] = array("O", "O", "X");
$game_err5[2] = array("O", "X", "A");

?>