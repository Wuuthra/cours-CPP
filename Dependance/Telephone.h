#ifndef TELEPHONE_H
#define TELEPHONE_H

#include <string>

#pragma once
class Pc;//on déclare la class Pc pour l'utiliser
class Server;

class Telephone
{
public:
    Telephone();
    Telephone(std::string marque);
    ~Telephone();

    void push(std::string mail);
    void lireSesMails();

    void envoyerMail(Pc* dest, std::string mail);

    void setAdressServer(Server* server);

private:
    std::string m_marque;
    std::string m_listMails;
    Server* m_adresseServer;//pointeur vers le server
};

#endif