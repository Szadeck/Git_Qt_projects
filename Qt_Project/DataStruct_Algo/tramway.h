// ====================================

// FICHIER Tramway.h

// ====================================

#ifndef TRAMWAY_H_INCLUDED

#define TRAMWAY_H_INCLUDED

#include "Interfaces.h"


class Tramway : public IEventsPupitreTramway, public IEventsPupitreStation

{

   public :

    Tramway();


    virtual ~Tramway();


    IEventsControleTramway& controles();


    virtual void arretDepuisStationDemande() ;

    virtual void tramwayPositionne();

    virtual void departAutorise();

    virtual void arretUrgenceDeclenche();

    virtual void arretProchaineStationDeclenche();

    virtual void ouverturePorteDeclenche();


   private :

    AutomateTramway *m_contexte;

    IEventsControleTramway *m_controlesWagon;

};

#endif // TRAMWAY_H_INCLUDED
