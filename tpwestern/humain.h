#ifndef HUMAIN_H
#define HUMAIN_H

#include<iostream>


class Humains
{
public:
    Humains();
    Humains(std::string nom, std::string boissonFavorite="eau");
    ~Humains();

    void parle(std::string texte);
    void sePresente();
    void boit();


    std::string getBoissonFavorite() ;
    void setBoissonFavorite( std::string boissonFavorite);

    std::string getNom() ;

private:

protected:
    std::string m_nom;
    std::string m_boissonFavorite;


};

#endif // HUMAIN_H
