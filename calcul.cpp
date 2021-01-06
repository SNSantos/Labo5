//
// Created by User on 06.01.2021.
//

#include "calcul.h"


bool estBissextile(int annee){

}

int nbJourDuMois (int mois, int annee) {
   switch (mois) {
      case 2:
         if (estBissextile(annee)) {
            return 29;
         } else { return 28; }
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         return 31;
      default :
         return 30;
   }








}