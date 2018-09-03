// ====================================

// FICHIER EtatDeplacement.cpp

// ====================================

#include "etatdeplacement.h"


#include "automatetramway.h"

#include "etatarretimminent.h"

#include "etatarreturgence.h"


#include <iostream>


void EtatDeplacement::arretProchaineStationDemandee(AutomateTramway &c)

{

   c.changerEtat(new EtatArretImminent());

}


void EtatDeplacement::arretDepuisStationDemande(AutomateTramway &c)

{

   c.changerEtat(new EtatArretImminent());

}


void EtatDeplacement::arretUrgenceDeclenche(AutomateTramway &c)

{

   c.getControlesTramway().stopperWagon();

   c.changerEtat(new EtatArretUrgence(this));

}


void EtatDeplacement::tramwayPositionne(AutomateTramway &c)

{ std::cout << "Station passée sans s'arrêter." << std::endl; }


void EtatDeplacement::ouverturePorteDeclenche(AutomateTramway &c)

{ std::cout << "Ouverture porte impossible." << std::endl; }


void EtatDeplacement::departAutorise(AutomateTramway &c) { /* RIEN */ }

