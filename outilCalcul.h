//
// Created by User on 06.01.2021.
//

#ifndef LABO5_OUTILCALCUL_H
#define LABO5_OUTILCALCUL_H

enum class Mois {
   JANVIER = 1, FEVRIER, MARS, AVRIL, MAI, JUIN, JUILLET, AOUT,
   SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE
};

bool estBissextile(unsigned annee);

unsigned nbJourDuMois(unsigned mois, unsigned annee);

int nbChiffres(unsigned int n);

#endif //LABO5_OUTILCALCUL_H

