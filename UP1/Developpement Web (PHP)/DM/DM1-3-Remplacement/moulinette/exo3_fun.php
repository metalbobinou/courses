<?php

function my_CalculTVA($input_table)
{
  $output = "";
  foreach($input_table as $id => $facture)
  {
    //echo("Facture $id : ");
    foreach($facture as $cle => $valeur)
    {
      if ($cle != "Date")
      {
        if ($cle == "Montant_TTC")
        {
	  $output = $output . processTVA($valeur);
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

function processTVA($montant_TTC)
{
  $montant_HT = ((int) ($montant_TTC / 1.2));
  $taux_TVA = 20;
  $taxes = $montant_TTC - $montant_HT;

  $output = $montant_TTC . ";" . $montant_HT . ";" . $taux_TVA . ";" . $taxes;
  return($output);
}

?>
