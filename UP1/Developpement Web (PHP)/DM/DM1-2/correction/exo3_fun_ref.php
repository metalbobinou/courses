<?php

function my_Reduction($input_table, $reduction)
{
  $output = "";
  foreach($input_table as $id => $facture)
  {
    //echo("Facture $id : ");
    foreach($facture as $cle => $valeur)
    {
      if ($cle != "Date")
      {
        if ($cle == "Montant")
        {
	  $tmp_str = processReduction($valeur, $reduction);
	  $output = $output . $tmp_str;
	}
	else
	{
          //echo("$cle : $valeur | ");
	  $output = $output . "$valeur;";
        }
      }
      else
      {
        //echo("$cle : " . date_format($valeur, "y-m-d") . " | ");
        $output = $output . date_format($valeur, "y/m/d") . ";";
      }
    }
    //echo("\n");
    $output = $output . "\n";
  }

  return ($output);
}

function processReduction($montant, $taux_reduction)
{
  $reduction = (int) ($montant * $taux_reduction / 100);
  $montant_final = $montant - $reduction;

  $output = $montant_final . ";" . $montant . ";" . $taux_reduction . ";" . $reduction;
  return($output);
}

?>
