// ====================================

// FICHIER EtatArretUrgence.h

// ====================================

#ifndef ETATARRETURGENCE_H_INCLUDED

#define ETATARRETURGENCE_H_INCLUDED


#include "interfaces.h"


class EtatArretUrgence : public EtatTramway

{

   public :

    EtatArretUrgence(EtatTramway *etatPrecedent) ;


    virtual void arretUrgenceDeclenche(AutomateTramway &c);

    virtual void tramwayPositionne(AutomateTramway &c);

    virtual void departAutorise(AutomateTramway &c);

    virtual void arretProchaineStationDemandee(AutomateTramway &c);

    virtual void arretDepuisStationDemande(AutomateTramway &c);

    virtual void ouverturePorteDeclenche(AutomateTramway &c);


   private :

    EtatTramway *m_etatPrecedent;

    bool m_portesOUvertes;

};

#endif // ETATARRETURGENCE_H_INCLUDED
