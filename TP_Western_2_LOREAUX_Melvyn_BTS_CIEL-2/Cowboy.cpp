#include "Cowboy.h"
#include <iostream>
#include <string>

using namespace std;

#include "Humain.h"

Cowboy::Cowboy(std::string nom, std::string boissonFavorite, std::string comportement):
    Humain(nom, boissonFavorite), m_comportement(comportement)
{
    
}
Cowboy::Cowboy()
{

}

Cowboy::~Cowboy()
{

}

void Cowboy::sePresente()
{
    cout<<"("<<m_nom<<") -- Bonjour je suis le "<<m_comportement<<" " <<m_nom<<" et j'aime le "<<m_boissonFavorite <<endl<<endl;
}
