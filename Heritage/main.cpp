#include <iostream>
#include <windows.h>

#include "Vehicules.h"
#include "Motos.h"
#include "Voitures.h"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Vehicules veh1;
    veh1.sePresente();

    Vehicules veh2("Toyota");
    veh2.sePresente();

    Vehicules veh3("Renault", "noire");
    veh3.sePresente();

    Vehicules veh4("Peugeot", "rouge", 15000);
    veh4.sePresente();

    Motos moto1;
    
    Motos moto2("Yamaha", "Bleu", 10000);
    moto2.sePresente();

    cout<<moto2.getMarque()<<endl;
    cout<<moto2.getCouleur()<<endl;
    cout<<moto2.getPrix()<<endl;

    Voitures voit1("Porsche", "rouge", 40000, 2);
    voit1.sePresente();

    Voitures voit2;
    voit2.sePresente();

    system("pause");

    return 0;
}