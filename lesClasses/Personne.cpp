#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;

//atribut statique
int Personne::m_nbPersonnes = 0;

Personne::Personne()
{
    // constructeur
    cout << "l'objet Personne d'adresse " << this << " est créé en mémoire" << endl<<endl;
    // this est le pointeur de l'objet, c'est son adresse en mémoire
    //on incrémente le nombre de personnes
    m_nbPersonnes++;
}

Personne::Personne(std::string prenom, std::string nom, int age): m_prenom(prenom), m_nom(nom), m_age(age)//liste d'initialisation
{
    // constructeur
    cout << "l'objet Personne d'adresse " << this << " est créé en mémoire" << endl<<endl;
    //on incrémente le nombre de personnes
    m_nbPersonnes++;
}

Personne::~Personne()
{
    // destructeur
    cout << "l'objet Personne d'adresse " << this << " est détruit de la mémoire" << endl<<endl;
    //on décrémente le nombre de personnes
    m_nbPersonnes--;
}

void Personne::setAge(int age)
{
    if ((age < 150) && (age >= 0))
    {
        m_age = age;
    }
    else
    {
        m_age = 0;
    }
}

void Personne::setNom(std::string nom)
{
    m_nom = nom; // m_nom est un attribut privé, nom est le paramètre envoyé
}

void Personne::setPrenom(std::string prenom)
{
    m_prenom = prenom;
}

void Personne::setNumTel(std::string numTel)
{
    if ((numTel.size() == 10))
    {
        m_numtel = numTel;
    }
    else
    {
        m_numtel = "invalide";
    }
}

void Personne::sePresenter()
{
    // la personne se présente
    cout << "Bonjour, je m'appelle " << m_prenom << " " << m_nom << ", j'ai " << m_age << " ans et mon numéro de téléphone est " << m_numtel << "" << endl;
}


int Personne::getNbPersonnes()
{
    return m_nbPersonnes;
}
