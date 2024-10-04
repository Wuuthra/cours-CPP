#ifndef VOITURES_H
#define VOITURES_H
#include <string>
#include "Vehicules.h"

#pragma once

class Voitures : public Vehicules
{
public:
    Voitures();
    Voitures(std::string marque, std::string couleur = "sans couleur", int prix = 0, int nbPortes = 4);
    ~Voitures();

    void sePresente();

private:
    int m_nbPortes;
};

#endif