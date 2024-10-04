#ifndef MOTOS_H
#define MOTOS_H
#include <string>

#include "Vehicules.h"

#pragma once

class Motos: public Vehicules //hérédité de la classe Vehicules
{
public:
    Motos();
    Motos(std::string marque, std::string couleur, int prix, int nbRoues=2);
    ~Motos();
    void sePresente();

private:
int m_nbRoues;

};

#endif