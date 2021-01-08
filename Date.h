//
// Created by User on 06.01.2021.
//

#ifndef LABO5_DATE_H
#define LABO5_DATE_H

#include <iostream>


enum class Format {
   TJJMMAAAA, PAAAAMMJJ,  TAAAAMMJJ, };

class Date {

   friend std::ostream &operator<<(std::ostream &lhs, const Date &rhs);



   friend bool operator<(const Date &lhs, const Date &rhs);

   friend bool operator>(const Date &lhs, const Date &rhs);

   friend bool operator<=(const Date &lhs, const Date &rhs);

   friend bool operator>=(const Date &lhs, const Date &rhs);

   friend bool operator==(const Date &lhs, const Date &rhs);

   friend bool operator!=(const Date &lhs, const Date &rhs);

   friend Date operator+(Date lhs, unsigned rhs);

   friend Date operator-(Date lhs, unsigned rhs);

   friend int operator-(const Date& lhs, const Date& rhs);


public:
   Date();

   Date(unsigned jour, unsigned mois, unsigned annee);

   Date &operator++();

   Date operator++(int);

   Date &operator--();

   Date operator--(int);

   Date &operator+=(unsigned nJour);

   Date &operator-=(unsigned nJour);

   std::string operator()(Format format);

   unsigned  getJour() const;
   unsigned  getMois() const;
   unsigned  getAnnee() const;

   void setJour(unsigned jour) ;
   void setMois(unsigned mois) ;
   void setAnnee(unsigned annee) ;

private:
   unsigned jour;
   unsigned mois;
   unsigned annee;
};

#endif //LABO5_DATE_H
