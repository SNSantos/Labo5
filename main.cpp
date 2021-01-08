/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Stéphane Nascimento Santos et Tugce Ozcan
Date creation  : 07.01.2021

Description    :

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/


#include <iostream>
#include "Date.h"
#include "operationDate.h"


using namespace std;

int main() {
   unsigned int a= 456;
   Date nouvelAn = Date(25,12,1364);
   Date nouvelDate= Date(5,5,500);





   nouvelAn + a;
   cout  << nouvelAn-nouvelDate;



}
