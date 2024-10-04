#ifndef VEHICULES_H
#define VEHICULES_H

#include <string>
#pragma once

class Vehicules
{
public:
    Vehicules();
    Vehicules(std::string marque, std::string couleur ="sans couleur", int prix=0);
    ~Vehicules();

    void sePresente();
    std::string getMarque();
    std::string getCouleur();
    int getPrix();

private:

protected:
std::string m_marque;
std::string m_couleur;
int m_prix;



};

#endif