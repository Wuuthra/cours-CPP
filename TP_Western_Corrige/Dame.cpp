#include "Dame.h"
#include <iostream>
#include <string>

#include "Humain.h"

using namespace std;

Dame::Dame()
{

}

Dame::Dame(std::string nom, std::string boissonFavorite, std::string couleurRobe)
    :Humain(nom, boissonFavorite), m_couleurRobe(couleurRobe)
{
    
}

Dame::~Dame()
{

}

void Dame::sePresente()
{
   cout<<"("<<m_nom<<") -- Bonjour je suis Miss " <<m_nom<<" et j'ai une jolie robe "<<m_couleurRobe<<endl<<endl;
}

void Dame::changeDeRobe(std::string couleurRobe)
{
    m_couleurRobe = couleurRobe;
    cout<<"("<<m_nom<<") -- Regardez ma nouvelle robe "<<m_couleurRobe<<endl;
}

std::string Dame::getNom()
{
    return "Miss " +m_nom;
}