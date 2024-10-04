#ifndef HUMAIN_H
#define HUMAIN_H
#include <string>

#pragma once

class Humain
{
public:
    Humain();
    Humain(std::string nom, std::string boissonFavorite="eau");
    ~Humain();

    std::string getNom();

    void parle(std::string texte);

    std::string getBoissonFavorite();

    void setBoissonFavorite(std::string boissonFavorite);
 
    void sePresenter();

    void boit();

private:
    std::string m_nom;
    std::string m_boissonFavorite;
};



#endif // HUMAIN_H
