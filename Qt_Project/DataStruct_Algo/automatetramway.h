// ====================================

// FICHIER AutomateTramway.h

// ====================================

#ifndef AUTOMATETRAMWAY_H_INCLUDED

#define AUTOMATETRAMWAY_H_INCLUDED


#include "interfaces.h"


class AutomateTramway : public IEventsPupitreStation, public IEventsPupitreTramway

{

   public :

    AutomateTramway(IEventsControleTramway *referenceTram);
    ~AutomateTramway();


    IEventsControleTramway& getControlesTramway();


    void changerEtat(EtatTramway *etat);


    virtual void arretUrgenceDeclenche();

    virtual void arretProchaineStationDeclenche() ;

    virtual void ouverturePorteDeclenche();

    virtual void arretDepuisStationDemande();

    virtual void tramwayPositionne();

    virtual void departAutorise();


   private :

    IEventsControleTramway *m_refCtrlTramway;

    EtatTramway *m_possedeEtat;

};

#endif // AUTOMATETRAMWAY_H_INCLUDED
