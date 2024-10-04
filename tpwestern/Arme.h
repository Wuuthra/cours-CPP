#ifndef ARME_H
#define ARME_H
#include <string>
#include "humain.h"


#pragma once

class Arme 
{
public:
    Arme();
    Arme(std::string marque);
    ~Arme();

    int getNbBalleRestante();

    bool tirer();

    void recharger(int nbBalles);

    std::string getMarque();

private:
std::string m_marque;
int m_capacite =6;
int m_nbBalles=0;

};

#endif