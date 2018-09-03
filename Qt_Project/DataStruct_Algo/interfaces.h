// ====================================
// FICHIER Interfaces.h
// ====================================
#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

class IEventsPupitreTramway
{
   public :
    virtual void arretUrgenceDeclenche() = 0;
    virtual void arretProchaineStationDeclenche() = 0;
    virtual void ouverturePorteDeclenche() = 0;
};

class IEventsPupitreStation
{
   public :
    virtual void arretDepuisStationDemande() = 0;
    virtual void tramwayPositionne() = 0;
    virtual void departAutorise() = 0;
};

class IEventsControleTramway
{
   public :
    virtual void ouvrirPortes() = 0;
    virtual void fermerPortes() = 0;
    virtual void stopperWagon() = 0;
    virtual void demarrerWagon() = 0;
};

class AutomateTramway; // Déclaration anticipée !
class EtatTramway
{
   public :
    virtual void arretProchaineStationDemandee(AutomateTramway &c) = 0;
    virtual void arretDepuisStationDemande(AutomateTramway &c) = 0;
    virtual void tramwayPositionne(AutomateTramway &c) = 0;
    virtual void departAutorise(AutomateTramway &c) = 0;
    virtual void arretUrgenceDeclenche(AutomateTramway &c) = 0;
    virtual void ouverturePorteDeclenche(AutomateTramway &c) = 0;
};
#endif // INTERFACES_H_INCLUDED

