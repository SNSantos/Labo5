/*
-----------------------------------------------------------------------------------
Nom du fichier : Date.cpp
Auteur(s)      : Stéphane Nascimento Santos et Tugce Ozcan
Date creation  : 07.01.2021

Description    :

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/


#include "Date.h"
#include "outilCalcul.h"

using namespace std;



Format Date::format = Format::PJJMMAAAA; //Le format date par défaut

Date::Date() {
   *this = Date(1, 1, 1);

}

Date::Date(unsigned int jour, unsigned int mois, unsigned int annee) {
   this->annee = annee;
   this->mois = mois;
   this->jour = jour;

}

Date &Date::operator++() {
   (jour < (unsigned) nbJourDuMois(mois, annee)) ? ++jour :
   (mois == 12 ? (mois = 1, ++annee) : ++mois,
      jour = 1);
   return *this;
}

Date Date::operator++(int) {
   Date temp = *this;
   ++*this;
   return temp;
}

Date &Date::operator--() {
   jour > 1 ? --jour : (mois == 1 ? (mois = 12, --annee) : --mois,
      jour = nbJourDuMois(mois, annee));
   return *this;
}

Date Date::operator--(int) {
   Date temp = *this;
   --*this;
   return temp;
}

Date &Date::operator+=(unsigned nJour) {
   if (jour == 29 && mois == (unsigned) Mois::FEVRIER) { // on se débarasse du 29.02
      --jour;
      ++nJour;
   }


   for (; nJour > 365; nJour -= 365) {

      if ((mois <= unsigned(Mois::FEVRIER) && estBissextile(annee)) ||
          (mois > unsigned(Mois::FEVRIER) && estBissextile(annee + 1))) {
         --nJour;
      }
      annee++;
   }
   for (; nJour > 30;) {
      unsigned maxMois = (nbJourDuMois(mois, annee));
      nJour -= 1 + maxMois - jour;
      jour = maxMois;
      ++*this;
   }
   for (; nJour > 0; --nJour) {
      ++*this;
   }
   return *this;
}

Date &Date::operator-=(unsigned nJour) {

   if (jour == 29 && mois == (unsigned) Mois::FEVRIER) { // on se débarasse du 29.02
      ++*this;
      ++nJour;
   }
   for (; nJour > 365; nJour -= 365) {
      if ((mois > (unsigned) Mois::FEVRIER && estBissextile(annee)) ||
          (mois <= (unsigned) Mois::FEVRIER && estBissextile(annee - 1))) {
         --nJour;
      }
      --annee;
   }
   for (; nJour > 30;) {
      nJour -= jour;
      jour = 1;
      --*this;
   }
   for (; nJour > 0; --nJour) {
      --*this;
   }
   return *this;
}

Date &Date::operator()(Format format) {
      Date::format = format;
      return *this;
}




