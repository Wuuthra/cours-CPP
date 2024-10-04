#include "dame.h"
#include<iostream>

#include "brigand.h"
#include "cowboy.h"

using namespace std;

Dame::Dame(string nom, string boissonFavorite, string couleurRobe):
    Humains(nom,boissonFavorite),m_couleurRobe(couleurRobe),m_etat("libre")
{

}

Dame::~Dame()
{

}

void Dame::sePresente()
{
    cout<<"("<<m_nom<<") --Bonjour je suis "<<getNom()
       <<" et j'ai une jolie robe "<<m_couleurRobe<<endl;
}

void Dame::changeRobe(std::string couleur)
{
    m_couleurRobe=couleur;
    cout<<"(" <<m_nom << ") -- " << "Regardez ma nouvelle robe " << m_couleurRobe << " !"
       <<endl;
}

string Dame::getNom()
{
    return "Miss "+m_nom;
}




void Dame::estKidnapper(Brigand* brigand)
{
    m_etat="kidnapper";
    cout<<"("<<m_nom<<") --Au secours, je me fais kidnapper par"<<brigand->getNom()<<" !"<<endl;

}

void Dame::estLiberer(Cowboy* cowboy)
{
    m_etat="libre";
    cout<<"("<<m_nom<<") -- Merci "<<cowboy->getNom()<<" tu es mon héros, je suis enfin libre !"<<endl;
}


