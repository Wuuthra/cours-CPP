#ifndef BRIGAND_H
#define BRIGAND_H
#include<iostream>
#include"humain.h"

class Dame;
class Cowboy;
class Arme;

class Brigand:public Humains
{
public:
    Brigand(std::string nom, std::string boissonFavorite="tord-boyaux",std::string comportement="mechant");
    ~Brigand();

    void sePresente();
    
    void kidnappe(Dame *dame);
    void estEmprisonner(Cowboy *cowboy);
    void estToucher(Cowboy *cowboy);
    void augmenteRecompense();
    void acheterArme(std::string marque);
    void rechargerArme(int nbBalles);
    void tire(Cowboy* cowboy);

private:
    std::string m_comportement;
    int m_recompense;
    bool m_enPrison=false;
    Arme* m_arme = nullptr;
};

#endif // BRIGAND_H
