

#include "operationDate.h"
#include "outilCalcul.h"


using namespace std;

ostream &operator<<(ostream &lhs, const Date &rhs) {
   char separateur;

   switch (Date::format) {
      case Format::PJJMMAAAA:
         separateur = '.';
         break;
      case Format::TJJMMAAAA:
         separateur = '-';
         break;
      case Format::TAAAAMMJJ:
         separateur = '-';
         for (int n = nbChiffres(rhs.annee); n < 4; n++) { lhs << 0; }
         lhs << rhs.annee << separateur;
         if (nbChiffres(rhs.mois) < 2) { lhs << 0; }
         lhs << rhs.mois << separateur;
         if (nbChiffres(rhs.jour) < 2) { lhs << 0; }
         lhs << rhs.jour;
         return lhs;
      default:
         break;
   }
   if (nbChiffres(rhs.jour) < 2) { lhs << 0; }
   lhs << rhs.jour << separateur;
   if (nbChiffres(rhs.mois) < 2) { lhs << 0; }
   lhs << rhs.mois << separateur;
   for (int n = nbChiffres(rhs.annee); n < 4; n++) { lhs << 0; }
   lhs << rhs.annee;
   return lhs;
}

bool operator<(const Date &lhs, const Date &rhs) {
   return lhs.annee < rhs.annee ||
          (lhs.annee == rhs.annee && (lhs.mois < rhs.mois ||
                                      (lhs.mois == rhs.mois &&
                                       lhs.jour < rhs.jour)));
}

bool operator>(const Date &lhs, const Date &rhs) { return rhs < lhs; }

bool operator<=(const Date &lhs, const Date &rhs) { return !(rhs < lhs); }

bool operator>=(const Date &lhs, const Date &rhs) { return !(lhs < rhs); }

bool operator==(const Date &lhs, const Date &rhs) {
   return lhs.annee == rhs.annee && lhs.mois == rhs.mois && lhs.jour == rhs.jour;
}

bool operator!=(const Date &lhs, const Date &rhs) { return !(lhs == rhs); }

Date operator+(Date lhs, unsigned rhs){
   lhs+= rhs;
   return lhs;
}
Date operator-( Date lhs, unsigned rhs){
   lhs-= rhs;
   return lhs;
}







