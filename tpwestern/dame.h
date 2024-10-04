#ifndef DAME_H
#define DAME_H


#include"humain.h"

class Brigand;
class Cowboy;


class Dame:public Humains
{
public:
    Dame(std::string nom, std::string boissonFavorite="lait",std::string couleurRobe="blanche");
    ~Dame();

    void sePresente();
    void changeRobe(std::string couleur);
    std::string getNom();

    void estKidnapper(Brigand* brigand);
    void estLiberer(Cowboy* cowboy);


private:
    std::string m_couleurRobe;
    std::string m_etat;

};

#endif // DAME_H
