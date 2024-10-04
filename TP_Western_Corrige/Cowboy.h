#ifndef COWBOY_H
#define COWBOY_H

#include <iostream>
#include <string>
#include "Humain.h"

#pragma once

class Cowboy : public Humain
{
public:

    Cowboy(std::string nom, std::string boissonFavorite="Whisky", std::string comportement="vaillant");
    Cowboy();
    ~Cowboy();

    void sePresente();

private:
    std::string m_comportement;

};

#endif