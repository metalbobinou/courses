<?php

$line1 = array(0, 42, 1);
$line2 = array(8, 9, 13);

$matrix1[] = $line1;
$matrix1[] = $line2;

$line1 = array(38, 64);
$line2 = array(12, 5);
$line3 = array(2, 42);

$matrix2[] = $line1;
$matrix2[] = $line2;
$matrix2[] = $line3;

$line1 = array(0, 42, 1);
$line2 = array(8, 9, 13);
$line3 = array(4, 0, 5);

$matrix3[] = $line1;
$matrix3[] = $line2;
$matrix3[] = $line3;


// SPECIAL CASES

$matrixEmpty1 = array();

$line = array();
$matrixEmpty2[] = $line;


// ERRORS

$line1 = array(0, "42", "A");
$line2 = array("-", "U", 13);
//$line3 = array('W', 0, "T");

$matrixError1[] = $line1;
$matrixError1[] = $line2;

?>