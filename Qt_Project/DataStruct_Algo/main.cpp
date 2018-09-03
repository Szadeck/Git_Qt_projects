#include <QCoreApplication>
#include <iostream>
#include <list>

#include "theheader.h"
    #include "tramway.h"

    using namespace std;

void testTramway()
{

   Tramway tram;

   // On va simuler les évènements en les appelant manuellement.

   tram.arretDepuisStationDemande();

   tram.departAutorise();

   tram.tramwayPositionne();

   tram.ouverturePorteDeclenche();

   tram.departAutorise();

   tram.tramwayPositionne();

   tram.ouverturePorteDeclenche(); // Portes impossibles à ouvrir

   tram.tramwayPositionne();

   tram.arretUrgenceDeclenche();

   tram.ouverturePorteDeclenche();

   tram.arretUrgenceDeclenche();


   tram.arretProchaineStationDeclenche();

   tram.tramwayPositionne();



}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testTramway();
    //Exercice_6_dp();
    //Exercice_1();
    //Exercice_3_dico();
    //Exercice_4();
    //Exercice_5();
    return a.exec();
}




