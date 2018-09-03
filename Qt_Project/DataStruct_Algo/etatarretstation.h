// ====================================

// FICHIER EtatArretStation.h

// ====================================

#ifndef ETATARRETSTATION_H_INCLUDED

#define ETATARRETSTATION_H_INCLUDED


#include "Interfaces.h"


class EtatArretStation : public EtatTramway

{

   public :

    EtatArretStation();


    virtual void arretProchaineStationDemandee(AutomateTramway &c);

    virtual void arretDepuisStationDemande(AutomateTramway &c);

    virtual void arretUrgenceDeclenche(AutomateTramway &c);

    virtual void departAutorise(AutomateTramway &c);

    virtual void ouverturePorteDeclenche(AutomateTramway &c);


    virtual void tramwayPositionne(AutomateTramway &c);


    private :

     bool m_demandeProchainArret;

};

#endif // ETATARRETSTATION_H_INCLUDED

