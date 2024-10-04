#include "humain.h"
#include<iostream>

using namespace std;

Humains::Humains()
{

}



Humains::Humains(std::string nom, std::string boissonFavorite):
    m_nom(nom),m_boissonFavorite(boissonFavorite)
  //intialisation des paramétres par liste d'iniatialisation

{
    //le code du constructeur

}

Humains::~Humains()
{

}

void Humains::parle(std::string texte)
{
    cout<<"("<<this->m_nom<<") "<<texte<<endl;
}

void Humains::sePresente()
{
    cout<<"("<<m_nom<<")-- Bonjour, je suis "<<m_nom
       <<" et j'aime le "<<m_boissonFavorite<<endl;
}

void Humains::boit()
{
    cout<<"("<<m_nom<<")-- Ah! un bon verre de "<<m_boissonFavorite
       <<"! GLOUP!"<<endl;
}



std::string Humains::getBoissonFavorite()
{
    return m_boissonFavorite;
}

void Humains::setBoissonFavorite(std::string boissonFavorite)
{
    m_boissonFavorite = boissonFavorite;
}

std::string Humains::getNom() 
{
    return m_nom;
}
