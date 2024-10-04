#include "Telephone.h"
#include <iostream>
#include <string>
#include "Pc.h"
#include "Server.h"

using namespace std;

Telephone::Telephone(): m_marque("sans marque"), m_listMails("")
{
    cout << "le Telephone d'adresse " << this << " est créé" << endl
         << endl;
}

Telephone::Telephone(std::string marque): m_marque(marque), m_listMails("")
{
    cout << "le Telephone " << m_marque << " d'adresse " << this << " est créé" << endl
         << endl;
}

Telephone::~Telephone()
{
    cout << "le Telephone d'adresse " << this << " est détruit" << endl
         << endl;
}

void Telephone::push(std::string mail)
{
    m_listMails = m_listMails + "\n" + mail;
}

void Telephone::lireSesMails()
{
    cout << "************ liste des mais dans le Telephone ************" << endl
     << m_listMails << endl
        << "**********************************************************" << endl
         << endl;
}

void Telephone::envoyerMail(Pc* dest, std::string mail) //dest est un pointeur de la classe Pc
{
   m_adresseServer->RecevoirMail(dest, mail);

}

void Telephone::setAdressServer(Server* server)
{
    m_adresseServer = server;
}

