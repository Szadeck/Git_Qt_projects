// ====================================

// FICHIER AutomateTramway.cpp

// ====================================

#include "automatetramway.h"


#include "etatarretstation.h"


AutomateTramway::AutomateTramway(IEventsControleTramway *referenceTram) : m_refCtrlTramway(referenceTram)

{

   m_possedeEtat = new EtatArretStation();

}


AutomateTramway::~AutomateTramway()

{

   delete m_possedeEtat;

}


IEventsControleTramway &AutomateTramway::getControlesTramway() { return *m_refCtrlTramway; }


void AutomateTramway::changerEtat(EtatTramway *etat)

{

    delete m_possedeEtat;

    m_possedeEtat = etat;

}


void AutomateTramway::arretUrgenceDeclenche() { m_possedeEtat->arretUrgenceDeclenche(*this);   }

void AutomateTramway::arretProchaineStationDeclenche() { m_possedeEtat->arretProchaineStationDemandee(*this);}

void AutomateTramway::ouverturePorteDeclenche() { m_possedeEtat->ouverturePorteDeclenche(*this);   }

void AutomateTramway::arretDepuisStationDemande() { m_possedeEtat->arretDepuisStationDemande(*this);   }

void AutomateTramway::tramwayPositionne() { m_possedeEtat->tramwayPositionne(*this); }

void AutomateTramway::departAutorise() { m_possedeEtat->departAutorise(*this); }
