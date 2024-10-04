#ifndef SERVER_H
#define SERVER_H
#include <string>

#pragma once

class Pc;
class Telephone;

class Server
{
public:
    Server();
    ~Server();

    void push(std::string mail);

    void RecevoirMail(Pc* dest ,std::string mail);
    void RecevoirMail(Telephone* dest ,std::string mail);


private:
    std::string m_listMails;
    std::string mail;


};

#endif