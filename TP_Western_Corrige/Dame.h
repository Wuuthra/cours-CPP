#ifndef DAME_H
#define DAME_H

#include <string>
#include "Humain.h"

#pragma once

class Dame : public Humain
{
public:
    Dame();
    Dame(std::string nom, std::string boissonFavorite="lait", std::string couleurRobe="blanche");
    ~Dame();

    void sePresente();
    void changeDeRobe(std::string couleurRobe);
    std::string getNom();

private:
    std::string m_couleurRobe;
    std::string m_etat ="libre";


};

#endif