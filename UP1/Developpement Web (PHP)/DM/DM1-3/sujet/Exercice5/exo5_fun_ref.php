<?php

function my_Loginisation($ReferenceList, $RequestList)
{
  $output = "";

  foreach ($Classe as $etd)
  {
    if (in_array($etd, $ReferenceList, true))
    {
      if ((isset($etd[0])) && (isset($etd[1])) && (isset($etd[2])))
      {
        $prenom = $etd[0];
      	$nom = $etd[1];
      	$date = $etd[2];
      }

      if ((gettype($prenom) == "string") &&
       	 (gettype($nom) == "string") &&
       	 (gettype($date) == "string"))
      {
	if ((strlen($prenom) > 0) &&
      	   (strlen($nom) > 0) &&
	   (strlen($date) > 0))
      	{
          $initiale = $prenom[0];
	  $prelogin = strtolower($initiale . $nom);

	  $size_year = strlen($date);
	  $decennie = substr($date, ($size_year - 2), 2);
	  $login = $prelogin . $decennie;

	  $output = $output . $login . "\n";
      	}
      }
    }
  }
  return ($output);
}

?>
