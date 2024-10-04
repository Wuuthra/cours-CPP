#include "Arme.h"

Arme::Arme()
{
    
}

Arme::Arme(std::string marque):m_marque(marque)
{
    
}

Arme::~Arme()
{

}

int Arme::getNbBalleRestante()
{
    return m_nbBalles;
}

bool Arme::tirer()
{
    if (m_nbBalles>0)
    {
        m_nbBalles--;
        return true;
    }
    else
    {
        m_nbBalles=0;
        return false;
    }
}

void Arme::recharger(int nbBalles)
{
    if (nbBalles<=m_capacite)
    {
        m_nbBalles=nbBalles;
    }
    else
    {
        m_nbBalles=m_capacite;
    }
}

std::string Arme::getMarque()
{
    return m_marque;
}