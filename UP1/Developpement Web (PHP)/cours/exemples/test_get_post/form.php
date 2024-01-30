<html>
<body>

  <?php

    if (isset($_GET["nomClient"]))
    {
    echo "FORM : Coucou : " . $_GET["nomClient"];
    }
    else
    {
    ?>
  
<form name="formClient" action="action.php" method="POST" >
      <label for="nom">Nom</label>
      <input type="text" id="nom" name="nomClient" value="votre nom" size="40" maxlength="150" />  <br/>

        <label>Produit</label>
       <select name="produit">
            <option value="SuperKdo">Super Kdo</option>
             <option value="MegaTruc">Mega Truc</option>
             <option value="BabyFun">Baby Fun</option>
         </select>   <br/>

        <label>Opinion</label>
        <textarea name="opinionClient" cols="40" rows="5" > Votre opinion sur nos produits </textarea>  <br/>

   <input type="submit" value="Envoyer" class="bouton" />
   <input type="reset"  value="Nettoyer" class="bouton"  />
  </form>

<?php
  }
  ?>
  

</body>
</html>
