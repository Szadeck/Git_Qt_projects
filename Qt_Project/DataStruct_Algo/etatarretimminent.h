// ====================================

// FICHIER EtatArretImminent.h

// ====================================

#ifndef ETATARRETIMMINENT_H_INCLUDED

#define ETATARRETIMMINENT_H_INCLUDED


#include "Interfaces.h"



class EtatArretImminent : public EtatTramway

{

   public :

    virtual void arretUrgenceDeclenche(AutomateTramway &c);

    virtual void tramwayPositionne(AutomateTramway &c);

    virtual void ouverturePorteDeclenche(AutomateTramway &c);

    virtual void arretProchaineStationDemandee(AutomateTramway &c);

    virtual void departAutorise(AutomateTramway &c);

    virtual void arretDepuisStationDemande(AutomateTramway &c);

};

#endif // ETATARRETIMMINENT_H_INCLUDED

