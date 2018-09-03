// ====================================

// FICHIER EtatArretImminent.cpp

// ====================================

#include "etatarretimminent.h"


#include "automatetramway.h"

#include "etatarretstation.h"

#include "etatarreturgence.h"


#include <iostream>


void EtatArretImminent::arretUrgenceDeclenche(AutomateTramway &c)

{

   c.getControlesTramway().stopperWagon();

   c.changerEtat(new EtatArretUrgence(this));

}


void EtatArretImminent::tramwayPositionne(AutomateTramway &c)

{

   c.getControlesTramway().stopperWagon();

   c.changerEtat(new EtatArretStation());

}


void EtatArretImminent::ouverturePorteDeclenche(AutomateTramway &c)

{ std::cout << "Ouverture porte impossible." << std::endl; }


void EtatArretImminent::arretProchaineStationDemandee(AutomateTramway &c)  { /* RIEN */ }

void EtatArretImminent::departAutorise(AutomateTramway &c) { /* RIEN */ }

void EtatArretImminent::arretDepuisStationDemande(AutomateTramway &c)  { /* RIEN */ }

