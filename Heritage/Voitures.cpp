#include "Voitures.h"
#include "Vehicules.h"
#include <iostream>
#include <string>

using namespace std;

Voitures::Voitures() : Vehicules()
{
}

Voitures::Voitures(std::string marque, std::string couleur, int prix, int nbPortes) : Vehicules(marque, couleur, prix), m_nbPortes(nbPortes)
{
}

Voitures::~Voitures()
{
}

void Voitures::sePresente()
{
    cout << "Je suis une voiture de marque " << m_marque << ", de couleur " << m_couleur <<
    " et de prix " << m_prix << " euros et j'ai " << m_nbPortes << "portes." << endl
         << endl;
}