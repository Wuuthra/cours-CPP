#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

#pragma once

class Personne
{
public:
    // fonction statique
    static int getNbPersonnes();

    Personne(); // constructeur
    // surcharger le constructeur
    Personne(std::string prenom, std::string nom = "Rien", int age = 0);
    ~Personne(); // destructeur est unique

    int getAge();
    void setAge(int age);
    void setNom(std::string nom); // setter, mutateur
    std::string getNom();
    void setPrenom(std::string prenom); // setter, mutateur
    std::string getPrenom();
    void setNumTel(std::string numTel);

    std::string getNumTel();

    void sePresenter();

private:
    std::string m_nom;
    std::string m_prenom;
    int m_age;
    std::string m_numtel;
    
    // atribut statique
    static int m_nbPersonnes;
};

#endif