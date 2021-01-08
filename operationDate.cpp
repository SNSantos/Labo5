


#include "operationDate.h"
#include "outilCalcul.h"
#include <iomanip>

using namespace std;


ostream &operator<<(ostream &lhs, const Date &rhs) {

   char separateur = '.';
   lhs << setw(2) << setfill('0') << rhs.jour << separateur;
   lhs << setw(2) << setfill('0') << rhs.mois << separateur;
   lhs << setw(4) << setfill('0') << rhs.annee;

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

Date operator+(Date lhs, unsigned rhs) {
   lhs += rhs;
   return lhs;
}

Date operator-(Date lhs, unsigned rhs) {
   lhs -= rhs;
   return lhs;
}

int operator-(const Date &lhs, const Date &rhs) {

   if (lhs == rhs) { return 0; } //evite les test inutile;
   if (lhs< rhs) { return -(rhs - lhs); }
   int nbJourDifference = 0;

   unsigned anD = rhs.annee;
   unsigned moisD = rhs.mois;


   for (; anD + 1 < lhs.annee; anD++) {
      nbJourDifference +=
         (moisD <= (unsigned) Mois::FEVRIER && estBissextile(anD)) ||
         (moisD > (unsigned) Mois::FEVRIER && (unsigned) estBissextile(anD + 1))
         ? 366 : 365;
   }
   unsigned jourD = rhs.jour;

   for (; anD < lhs.annee or moisD < lhs.mois; ++moisD) {
      nbJourDifference += (int)nbJourDuMois(moisD, anD) - (int)jourD + 1;
      jourD = 1;
      if (moisD == 13) {
         moisD = 1;
         anD++;
      }
   }
   for (; jourD <= lhs.jour; ++jourD) {
      ++nbJourDifference;
   }
   return nbJourDifference;
}



