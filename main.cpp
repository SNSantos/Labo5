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
   unsigned a = 900 ;
   Date nouvelAn = Date(1,1,1);
   nouvelAn+=a;
   Date no = nouvelAn;
   cout << no(Format::PJJMMAAAA) << endl << nouvelAn(Format::TAAAAMMJJ)
   << endl;


}
