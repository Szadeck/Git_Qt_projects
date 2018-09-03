// ====================================

// FICHIER EtatArretStation.cpp

// ====================================

#include "etatarretstation.h"


#include "automatetramway.h"

#include "etatarreturgence.h"

#include "etatarretimminent.h"

#include "etatdeplacement.h"


EtatArretStation::EtatArretStation() : m_demandeProchainArret(false)

{


}


void EtatArretStation::arretProchaineStationDemandee(AutomateTramway &c)

{

   m_demandeProchainArret = true;

}


void EtatArretStation::arretDepuisStationDemande(AutomateTramway &c)

{

   m_demandeProchainArret = true;

}


void EtatArretStation::arretUrgenceDeclenche(AutomateTramway &c)

{

   c.getControlesTramway().stopperWagon();

   c.changerEtat(new EtatArretUrgence(this));

}


void EtatArretStation::departAutorise(AutomateTramway &c)

{

   c.getControlesTramway().fermerPortes();

   c.getControlesTramway().demarrerWagon();

   if(m_demandeProchainArret)

      c.changerEtat(new EtatArretImminent());

   else

      c.changerEtat(new EtatDeplacement());

}


void EtatArretStation::ouverturePorteDeclenche(AutomateTramway &c)

{

    c.getControlesTramway().ouvrirPortes();

}


void EtatArretStation::tramwayPositionne(AutomateTramway &c) { /* RIEN */ }
