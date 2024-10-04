#include "Motos.h"
#include <iostream>
#include <string>

using namespace std;

Motos::Motos():
    Vehicules()
{
    cout<<"L'objet moto est instancier en mémoire à l'adresse: "<<this<<endl;
}



Motos::Motos(std::string marque, std::string couleur, int prix, int nbRoues):
Vehicules(marque, couleur, prix), m_nbRoues(nbRoues)
{
    cout<<"L'objet moto est instancier en mémoire à l'adresse: "<<this<<endl;
}

Motos::~Motos()
{

}

void Motos::sePresente()
{
        cout<<"Je suis une moto de marque "<<m_marque<<", de couleur "<<m_couleur<<" et de prix "<<m_prix<<" euros et j'ai "<<m_nbRoues<<"roues."<<endl<<endl;

}