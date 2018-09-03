// ====================================

// FICHIER EtatDeplacement.h

// ====================================

#ifndef ETATDEPLACEMENT_H_INCLUDED

#define ETATDEPLACEMENT_H_INCLUDED


#include "Interfaces.h"


class EtatDeplacement : public EtatTramway

{

   public :

    virtual void arretProchaineStationDemandee(AutomateTramway &c);

    virtual void arretDepuisStationDemande(AutomateTramway &c);

    virtual void arretUrgenceDeclenche(AutomateTramway &c);

    virtual void tramwayPositionne(AutomateTramway &c);

    virtual void ouverturePorteDeclenche(AutomateTramway &c);

    virtual void departAutorise(AutomateTramway &c);

};

#endif // ETATDEPLACEMENT_H_INCLUDED
