#ifndef COWBOY_H
#define COWBOY_H
#include"humain.h"
#include"arme.h"

class Dame;
class Brigand;


class Cowboy:public Humains
{
public:
    Cowboy(std::string nom, std::string boissonFavorite="Whisky",std::string comportement="vaillant");
	~Cowboy();
    void sePresente();
    std::string getNom();


    void tire(Brigand* brigand);
    void emprisonne(Brigand* brigand);
    void libere(Dame* dame);
    void acheterArme(std::string marque);
    void rechargerArme(int nbBalles);
    void esciveTireJoe(Brigand* brigand);



private:
    std::string m_comportement;
    Arme* m_arme = nullptr;
};

#endif // COWBOY_H
