/*
-----------------------------------------------------------------------------------
Nom du fichier : calcul.cpp
Auteur(s)      : Stéphane Nascimento Santos et Tugce Ozcan
Date creation  : 07.01.2021

Description    :

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/
#include "outilCalcul.h"

bool estBissextile(unsigned annee) {
   return annee % 400 == 0 || (annee % 4 == 0 && annee % 100 != 0);
}

unsigned nbJourDuMois(unsigned mois, unsigned annee) {
   switch ((Mois)mois) {

      case Mois::FEVRIER:
         if (estBissextile(annee)) {
            return 29;
         } else { return 28; }
      case Mois::JANVIER:
      case Mois::MARS:
      case Mois::MAI:
      case Mois::JUILLET:
      case Mois::AOUT:
      case Mois::OCTOBRE:
      case Mois::DECEMBRE:
         return 31;
      default :
         return 30;
   }
}
int nbChiffres(unsigned n) {
   if (n == 0) { return 0; }
   return 1 + nbChiffres(n / 10);
}






