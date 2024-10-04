#include "Pc.h"
#include <iostream>
#include <string>
#include "Telephone.h"
#include "Server.h"

using namespace std;

Pc::Pc() : m_marque("sans marque"), m_listMails("")
{
    cout << "le PC d'adresse " << this << " est créé" << endl
         << endl;
}

Pc::Pc(std::string marque) : m_marque(marque), m_listMails("")
{
    cout << "le PC " << m_marque << " d'adresse " << this << " est créé" << endl
         << endl;
}

Pc::~Pc()
{
    cout << "le PC d'adresse " << this << " est détruit" << endl
         << endl;
}

void Pc::push(std::string mail)
{
    m_listMails = m_listMails + "\n" + mail;
}

void Pc::lireSesMails()
{
    cout << "************ liste des mais dans le PC ************" << endl
     << m_listMails << endl
        << "****************************************************" << endl
         << endl;
}

void Pc::envoyerMail(Telephone* dest, std::string mail)//dest est un pointeur de la classe Telephone
{
    m_adresseServer->RecevoirMail(dest, mail);
}

void Pc::setAdressServer(Server* server)
{
    m_adresseServer = server;
}


