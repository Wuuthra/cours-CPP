#include "Vehicules.h"
#include <iostream>

using namespace std;

Vehicules::Vehicules():
m_marque("sans marque"), m_couleur("sans couleur"), m_prix(0)
{
    cout<<"L'objet vehicule est instancier en mémoire à l'adresse: "<<this<<endl;
}

Vehicules::Vehicules(std::string marque, std::string couleur, int prix):
m_marque(marque), m_couleur(couleur), m_prix(prix)
{
    cout<<"L'objet vehicule est instancier en mémoire à l'adresse: "<<this<<endl;
}

Vehicules::~Vehicules()
{
    cout<<"L'objet vehicule est supprimer de la mémoire à l'adresse: "<<this<<endl;
}

void Vehicules::sePresente()
{
    cout<<"Je suis un vehicule de marque "<<m_marque<<", de couleur "<<m_couleur<<" et de prix "<<m_prix<<" euros."<<endl<<endl;
}

std::string Vehicules::getMarque()
{
    return m_marque;
}

std::string Vehicules::getCouleur()
{
    return m_couleur;
}

int Vehicules::getPrix()
{
    return m_prix;
}