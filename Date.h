//
// Created by User on 06.01.2021.
//

#ifndef LABO5_DATE_H
#define LABO5_DATE_H


class Date {
   // operateurs de comparaison
   friend bool operator<(const Date& lhs, const Date& rhs);
   friend bool operator>(const Date& lhs, const Date& rhs) ;
   friend bool operator<=(const Date& lhs, const Date& rhs) ;
   friend bool operator>=(const Date& lhs, const Date& rhs) ;
   friend bool operator==(const Date& lhs, const Date& rhs) ;
   friend bool operator!=(const Date& lhs, const Date& rhs) ;


public:
   Date ();
   Date (unsigned jour, unsigned mois, unsigned annee);
   Date& operator++();
   Date operator++(int);
   Date& operator--();
   Date operator--(int);
   Date& operator+=(int nbJour);


private:
   unsigned jour;
   unsigned mois;
   unsigned annee;


};


#endif //LABO5_DATE_H
