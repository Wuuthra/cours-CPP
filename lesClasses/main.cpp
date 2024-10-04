#include <iostream>
#include <windows.h>

#include "Personne.h"
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
   //on affiche le nombre de personnes
    cout<<"Il y a "<<Personne::getNbPersonnes()<<" d'instancier en mémoire."<<endl;
 
  //1er objet à créer
    Personne pers1; //instancier la classe, l'objet s'appelle pers1
    //on affiche le nombre de personnes
    cout<<"Il y a "<<Personne::getNbPersonnes()<<" d'instancier en mémoire."<<endl;
    pers1.setNom("DOE");
    pers1.setPrenom("John");
    pers1.setAge(30);
    pers1.setNumTel("060660606");

    pers1.sePresenter();

  //2eme objet à créer
    Personne pers2; //instancier la classe, l'objet s'appelle pers2
     //on affiche le nombre de personnes
    cout<<"Il y a "<<Personne::getNbPersonnes()<<" d'instancier en mémoire."<<endl;
    pers2.setPrenom("Toto");
    pers2.setNom("TITI");
    pers2.setAge(5);
    pers2.setNumTel("0606060606");

    pers2.sePresenter();

    //3eme objet à créer
    Personne pers3("Arthur", "Rimbaut", 80);
     //on affiche le nombre de personnes
    cout<<"Il y a "<<Personne::getNbPersonnes()<<" d'instancier en mémoire."<<endl;
    pers3.sePresenter();

    //4eme objet à créer
    Personne pers4("Toto");
     //on affiche le nombre de personnes
    cout<<"Il y a "<<Personne::getNbPersonnes()<<" d'instancier en mémoire."<<endl;
    pers4.sePresenter();
    
 
 

  return 0;
}