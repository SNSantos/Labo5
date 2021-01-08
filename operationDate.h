//
// Created by User on 07.01.2021.
//

#ifndef LABO5_OPERATIONDATE_H
#define LABO5_OPERATIONDATE_H

#include <iostream>
#include "Date.h"

std::ostream &operator<<(std::ostream &lhs, const Date &rhs);

bool operator<(const Date &lhs, const Date &rhs);

bool operator>(const Date &lhs, const Date &rhs);

bool operator<=(const Date &lhs, const Date &rhs);

bool operator>=(const Date &lhs, const Date &rhs);

bool operator==(const Date &lhs, const Date &rhs);

bool operator!=(const Date &lhs, const Date &rhs);

Date operator+( Date lhs, unsigned rhs);

Date operator-( Date lhs, unsigned rhs);


#endif //LABO5_OPERATIONDATE_H
