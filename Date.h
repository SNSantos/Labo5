//
// Created by User on 06.01.2021.
//

#ifndef LABO5_DATE_H
#define LABO5_DATE_H

#include <iostream>


enum class Format {
   PJJMMAAAA, TJJMMAAAA, TAAAAMMJJ   };

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


public:
   Date();

   Date(unsigned jour, unsigned mois, unsigned annee);

   Date &operator++();

   Date operator++(int);

   Date &operator--();

   Date operator--(int);

   Date &operator+=(unsigned nJour);

   Date &operator-=(unsigned nJour);

   Date &operator()(Format format);



private:
   unsigned jour{};
   unsigned mois{};
   unsigned annee{};
   static Format format;
};

#endif //LABO5_DATE_H
