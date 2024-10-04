#include "brigand.h"
#include "dame.h"
#include "cowboy.h"
#include "Arme.h"


using namespace std;

Brigand::Brigand(string nom, string boissonFavorite, string comportement):
    Humains(nom,boissonFavorite),
    m_comportement(comportement),m_recompense(0)
{
}

Brigand::~Brigand()
{

}

void Brigand::sePresente()
{
    cout<<"("<<m_nom<<")-- Bonjour, je suis le "<<m_comportement<<" "<<m_nom
       <<" et j'aime le "<<m_boissonFavorite<< "et j'ai une revolvert de marque "<<m_arme->getMarque()<<endl;
}

void Brigand::kidnappe(Dame *dame) //en paramétre, l'adresse de l'objet dame
{
        cout<<"(" <<m_nom<< ") -- Ah ah! "<<dame->getNom()<<", tu es mienne desormais!"<<endl;
        augmenteRecompense();
        dame->estKidnapper(this);//envoie de l'adresse de l'objet brigand à l'objet dame.
        cout<<"(" <<m_nom<< ") -- la mise à prix de ma tête est de "<<m_recompense<<" dollars."<<endl;
}

void Brigand::estEmprisonner(Cowboy *cowboy) //passage de l'objet cowboy par pointeur. 
{
        cout<<"("<<m_nom<<")--Dammed, je suis fais! "<<cowboy->getNom()<<" tu m'as eu!"<<endl;
        m_recompense=0;
        m_enPrison=true;
        cout<<"("<<m_nom<<")-- ma tête n'a plus de mise a prix maintenant"<<endl;
}

void Brigand::estToucher(Cowboy *cowboy)
{
    cout<<"("<<m_nom<<")--Dammed, je suis fais! "<<cowboy->getNom()<<" tu m'as eu!"<<endl;
}

void Brigand::augmenteRecompense()
{
    m_recompense+=100;
}

void Brigand::acheterArme(std::string marque)
{
    m_arme = new Arme(marque);
    cout<<"("<<m_nom<<") -- J'ai un revolver tout neuf maintenant "<<endl;
}

void Brigand::rechargerArme(int nbBalles)
{
    m_arme->recharger(nbBalles);
    cout<<"("<<m_nom<<") -- J'ai maintenant "<<m_arme->getNbBalleRestante()<<" balles dans mon revolver"<<endl;
}

void Brigand::tire(Cowboy* cowboy)
{
    if (m_arme == nullptr)
    {
        cout<<"("<<m_nom<<") -- AH ZUT, je n'ai pas d'arme"<<endl;
    }
    else
    {
        if (m_arme->tirer())
        {
            cout<<"PAN!"<<endl;
            cout<<"("<<m_nom<<") -- prend ça rascal ! "<<endl;
            cowboy->esciveTireJoe(this);
        }
        else
        {
            cout<<"("<<m_nom<<") -- CLICK! CLICK! je n'ai plus de balle"<<endl;
        }
    }
}

