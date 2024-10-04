#include "Humain.h"
#include <iostream>
#include <string>

using namespace std;


Humain::Humain()
{
    
}

Humain::Humain(std::string nom, std::string boissonFavorite):m_nom(nom), m_boissonFavorite(boissonFavorite)
{
    
}



Humain::~Humain()
{
    
}



std::string Humain::getNom()
{
    return m_nom;
}

void Humain::parle(std::string texte)
{
    cout<<"("<<m_nom<<") --"<<texte<<endl;
}

std::string Humain::getBoissonFavorite()
{
  return m_boissonFavorite;
}

void Humain::setBoissonFavorite(std::string boissonFavorite)
{
    m_boissonFavorite = boissonFavorite;
}

void Humain::sePresente()
{
    cout<<"("<<m_nom<<")-- Bonjour, je suis "<<m_nom<<" et j'aime le "<<m_boissonFavorite<<endl;
}

void Humain::boit()
{
     cout<<"("<<m_nom<<") -- Ah! un bon verre de "<<m_boissonFavorite<<"! GLOUP!"<<endl;  
}

