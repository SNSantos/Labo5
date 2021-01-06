//
// Created by User on 06.01.2021.
//

#include "Date.h"
#include "calcul.h"

bool operator<(const Date &lhs, const Date &rhs) {
   return lhs.annee < rhs.annee ||
          lhs.annee == rhs.annee && (lhs.mois < rhs.mois ||
                                     lhs.mois == rhs.mois && lhs.jour < lhs.jour);
}

bool operator>(const Date &lhs, const Date &rhs) { return rhs < lhs; }

bool operator<=(const Date &lhs, const Date &rhs) { return !(rhs < lhs); }

bool operator>=(const Date &lhs, const Date &rhs) { return !(lhs < rhs); }

bool operator==(const Date &lhs, const Date &rhs) {
   return lhs.annee == rhs.annee && lhs.mois == rhs.mois && lhs.jour == rhs.jour;
}

bool operator!=(const Date &lhs, const Date &rhs) { return !(lhs == rhs); }

Date::Date() {
}

Date::Date(unsigned int jour, unsigned int mois, unsigned int annee) {
}

Date &Date::operator++() {
   (jour < nbJourDuMois((int) mois, (int) annee)) ? ++jour :
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
      jour = nbJourDuMois((int) mois, (int) annee));
   return *this;
}

Date &Date::operator--(int) {
   Date temp = *this;
   --*this;
   return temp;
}


Date &Date::operator+=(int nbJour) {
   for (nbJour; nbJour >= 365; nbJour -= 365){
      if (estBissextile((int)annee) && mois<=2){
         --*this;
         if (estBissextile((int)annee+1)){
         }
      }
   }
      return *this;
}

Date &Date::operator++() {
   return <#initializer#>;
}

Date &Date::operator++(int) {
   return <#initializer#>;
}

Date &Date::operator--() {
   return <#initializer#>;
}

Date &Date::operator--(int) {
   return <#initializer#>;
}
