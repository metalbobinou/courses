<?php

function my_NormalisationNom($filenames)
{
  foreach($filenames as $id => $filename)
  {
    // Positions importantes
    $LEN_LINE = strlen($filename);
    $POS_EXTENSION = strlen($filename) - 4;
    $POS_EXTENSION_DOT = strlen($filename) - 3;

    // Decoupage en 2 parties : avant le point, et apres
    $MY_PREFIXE = substr($filename, 0, $POS_EXTENSION);
    $MY_EXTENSION = substr($filename, $POS_EXTENSION_DOT, 3);

    // Extension mise en minuscule
    $MY_EXTENSION = strtolower($MY_EXTENSION);

    // Extraction des nombres du prefixe
    $MY_NUMBER = preg_replace("#[^0-9]#", "", $MY_PREFIXE);
    // Recuperation de la position de fin de prefixe
    $POS_END_PREFIXE = strpos($MY_PREFIXE, $MY_NUMBER);
    // Prefixe sans les nombres
    $MY_PREFIXE_NO_NUMS = substr($MY_PREFIXE, 0, $POS_END_PREFIXE);

    // Nombre de chiffres
    $LEN_NUMBERS = strlen($MY_NUMBER);

    // Ajout des zeros manquant
    if ($LEN_NUMBERS == 3)
    {
      $ADD_SPACES = "0";
    }
    elseif ($LEN_NUMBERS == 2)
    {
      $ADD_SPACES = "00";
    }
    elseif ($LEN_NUMBERS == 1)
    {
      $ADD_SPACES = "000";
    }
    else
    {
      $ADD_SPACES = "";
    }

    $MY_NEW_PREFIXE = $MY_PREFIXE_NO_NUMS . $ADD_SPACES . $MY_NUMBER;
    $MY_FINAL_NAME = $MY_NEW_PREFIXE . "." . $MY_EXTENSION;

    /*
    echo("filename : " . $filename . " prefixe : " . $MY_PREFIXE);
    echo(" num : " . $MY_NUMBER . " pref no num : " . $MY_PREFIXE_NO_NUMS);
    echo(" outname : " . $MY_FINAL_NAME . "\n");
    */

    $outnames[] = $MY_FINAL_NAME;
  }

  $output = PrintTab($outnames);
  return ($output);
}

function PrintTab($filenames)
{
  $output = "";

  foreach($filenames as $id => $value)
  {
    $output = $output . $value . "\n";
  }

  return($output);
}

?>
