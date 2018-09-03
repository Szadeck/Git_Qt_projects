// ====================================

// FICHIER Tramway.cpp

// ====================================

#include "tramway.h"


#include "automatetramway.h"


#include <iostream>


/**

 * Implémentation de l'interface IEventsControleTramway pour pouvoir faire des tests.

 * On se contente juste de redéfinir les opérations pour l'utiliser.

 */

class ControlesTramway : public IEventsControleTramway

{

   public:

    virtual void ouvrirPortes()  {std::cout << "Portes ouvertes." << std::endl;}

    virtual void fermerPortes()  {std::cout << "Portes fermées." << std::endl;}

    virtual void stopperWagon()  {std::cout <<  "Le tramway freine jusqu'à son arrêt." << std::endl;}

    virtual void demarrerWagon()  {std::cout << "Le tramway se lance en prenant de la vitesse." << std::endl;}

};


Tramway::Tramway()

{

   m_controlesWagon = new ControlesTramway(); // Le pointeur devrait être testé !

   m_contexte = new AutomateTramway(m_controlesWagon);

}


Tramway::~Tramway()

{

   delete m_controlesWagon;

   delete m_contexte;

}


IEventsControleTramway& Tramway::controles() { return *m_controlesWagon; }


void Tramway::arretDepuisStationDemande()

{

   m_contexte->arretDepuisStationDemande();

   std::cout << "Appel utilisateur d'un arrêt à la prochaine station depuis la station." << std::endl;

}


void Tramway::tramwayPositionne() { m_contexte->tramwayPositionne(); }

void Tramway::departAutorise() { m_contexte->departAutorise(); }

void Tramway::arretUrgenceDeclenche() {m_contexte->arretUrgenceDeclenche(); }

void Tramway::arretProchaineStationDeclenche()

{

     m_contexte->arretProchaineStationDeclenche();

     std::cout << "Appel utilisateur d'un arrêt à la prochaine station depuis le wagon." << std::endl;

}

void Tramway::ouverturePorteDeclenche() { m_contexte->ouverturePorteDeclenche(); }
