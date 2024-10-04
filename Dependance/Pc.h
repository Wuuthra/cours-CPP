#ifndef PC_H
#define PC_H
#include <string>



#pragma once
class Telephone;
class Server;

class Pc
{
public:
    Pc();
    Pc(std::string marque);
    ~Pc();

    void push(std::string mail);
    void lireSesMails();

    void envoyerMail(Telephone* dest, std::string mail);

    void setAdressServer(Server* server);

private:
std::string m_marque;
std::string m_listMails;
Server* m_adresseServer;


};

#endif