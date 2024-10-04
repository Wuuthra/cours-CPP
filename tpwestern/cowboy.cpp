#include "cowboy.h"
#include<iostream>

#include "dame.h"
#include "brigand.h"
#include "arme.h"

using namespace std;


Cowboy::Cowboy(string nom,string boissonFavorite, string comportement):
    Humains(nom,boissonFavorite),m_comportement(comportement)
{

}

Cowboy::~Cowboy()
{
    if (m_arme != nullptr)
    {
        delete m_arme;
    } 
}

void Cowboy::sePresente()
{
    cout<<"("<<m_nom<<")-- Bonjour, je suis le "<<m_comportement<<" "<<m_nom
       <<" et j'aime le "<<m_boissonFavorite<< "et j'ai un beau revolver de marque "<<m_arme->getMarque()<<endl;
}

std::string Cowboy::getNom()
{
    return m_nom;
}

void Cowboy::libere(Dame* dame)
{
    cout<<"("<<m_nom<<")-- tu es libre "<<dame->getNom()<<" maintenant."<<endl;
    dame->estLiberer(this);
}

void Cowboy::acheterArme(std::string marque)
{
    m_arme = new Arme(marque);
    cout<<"("<<m_nom<<") -- J'ai un revolver tout neuf maintenant "<<endl;
}

void Cowboy::rechargerArme(int nbBalles)
{
    m_arme->recharger(nbBalles);
    cout << "(" << m_nom << ") -- J'ai maintenant " << m_arme->getNbBalleRestante() << " balles dans mon revolver" << endl;
}

void Cowboy::esciveTireJoe(Brigand* brigand)
{
    cout <<"("<<m_nom<<") -- Tu m'a louper !"<<brigand->getNom() << endl;
}






void Cowboy::tire(Brigand* brigand)
{
    if (m_arme == nullptr)
    {
        cout<<"("<<m_nom<<") -- AH ZUT, je n'ai pas d'arme"<<endl;
    }
    else
    {
        if (m_arme->tirer())
        {
            cout<<"PAN!"<<endl;
            cout<<"("<<m_nom<<") -- prend ça rascal ! "<<endl;
            brigand->estToucher(this);
            
        }
        else
        {
            cout<<"("<<m_nom<<") -- AH ZUT, je n'ai plus de balle dans le revolver"<<endl;
        }

        if (m_arme->getNbBalleRestante() == 0)
        {
           rechargerArme(6);
           cout<<"("<<m_nom<<") -- J'ai maintenant 6 balles dans mon revolver"<<endl;

        }
        
    }
}

void Cowboy::emprisonne(Brigand* brigand)
{
    cout<<"("<<m_nom<<") -- "<<" je te tiens, "<<brigand->getNom()<<endl;
    brigand->estEmprisonner(this);
}

