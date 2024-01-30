<?php

function my_Calculette($nb1, $nb2, $op)
{
  $output = "";
  $errortype="Incorrect parameters type";
  $erroroperation="Unknown operator";
  $errordivision="Division by 0 is forbidden";
 #les erreurs
 if((is_numeric($nb1)==False) AND (is_numeric($nb2)==False)
 			      AND (is_string($op)==False)){
		return($errortype);
  }
	elseif($op!="+" OR $op!="-" OR $op!="*" OR $op!="/" OR $op!="%"){
			return($erroroperation);
	}
		elseif($nb2==0){
			return($errordivision);
		}
		else{
		#debut du code calculatrice
			if($op="+"){
				$output= $nb1+$nb2;
			}
			elseif($op="-"){
				$output= $nb2-$nb1;
			}
			elseif($op="*"){
				$output= $nb1*$nb2;
			}
			elseif($op="/"){
				$output= $nb2/$nb1;
			}
			elseif($op="%"){
				$output= $nb1%$nb2;
			}
		}
  return ($output);
}
?>
