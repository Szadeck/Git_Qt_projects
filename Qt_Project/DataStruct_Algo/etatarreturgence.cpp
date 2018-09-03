// ====================================

// FICHIER EtatArretUrgence.cpp

// ====================================

#include "etatarreturgence.h"


#include "automatetramway.h"


EtatArretUrgence::EtatArretUrgence(EtatTramway *etatPrecedent) : m_etatPrecedent(etatPrecedent),

   m_portesOUvertes(false)

{


}


void EtatArretUrgence::arretUrgenceDeclenche(AutomateTramway &c)

{

   if(m_portesOUvertes)

      c.getControlesTramway().fermerPortes();

   c.getControlesTramway().demarrerWagon();

   c.changerEtat(m_etatPrecedent);

}


void EtatArretUrgence::tramwayPositionne(AutomateTramway &c) { /* RIEN */ }

void EtatArretUrgence::departAutorise(AutomateTramway &c) { /* RIEN */ }

void EtatArretUrgence::arretProchaineStationDemandee(AutomateTramway &c) { /* RIEN */ }

void EtatArretUrgence::arretDepuisStationDemande(AutomateTramway &c) { /* RIEN */ }


void EtatArretUrgence::ouverturePorteDeclenche(AutomateTramway &c)

{

   c.getControlesTramway().ouvrirPortes();

   m_portesOUvertes = true;

}

