#include "Server.h"
#include <iostream>
#include <string>
#include "Pc.h"
#include "Telephone.h"

using namespace std;

Server::Server()
{

}

Server::~Server()
{

}

void Server::push(std::string mail)
{
    m_listMails = m_listMails + "\n" + mail;
}

void Server::RecevoirMail(Pc* dest ,std::string mail)
{
    dest->push(mail);
}

void Server::RecevoirMail(Telephone* dest ,std::string mail)
{
    dest->push(mail);
}



