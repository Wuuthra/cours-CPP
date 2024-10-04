#include <iostream>
#include <windows.h>

#include "Server.h"
#include "Pc.h"
#include "Telephone.h"

using namespace std;

//les fonctions
// void modifierA(int a){
//     a=a+20;//nouvelle variable a
//     cout << "adresse de a = "<<&a<<" valeur de a dans la fonction = " << a << endl;
// }

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    Server server;
    

    // on insantcie un objet Pc
    Pc pc1;
    Pc pc2("asus");

     
    //on insantcie un objet Telephone
    Telephone tel1("apple");

    // // push des messages dans le pc
    // pc1.push("Bonjour");
    // pc1.push("Comment vas-tu ?");

    // // afficher mes messages
    // pc1.lireSesMails();

   

    // // push des messages dans le telephone
    // tel1.push("Salut...");
    // tel1.push("Comment ça va ?");

    // // afficher mes messages
    // tel1.lireSesMails();

    

    

    //test avec server
    cout <<endl<< "************ test avec server ************" << endl;


    //test de la dépendance

    cout <<endl<< "************ test de la dépendance ************" << endl;
    tel1.setAdressServer(&server);
    tel1.envoyerMail(&pc1, "Envoyer depuis mon telephone");
    tel1.envoyerMail(&pc1, "Nouveau message envoyé depuis mon telephone");

    //affiche les messages recu
    pc1.lireSesMails();

    //test de la dépendance
    cout <<endl<< "************ test de la dépendance ************" << endl;
    pc1.setAdressServer(&server);
    pc1.envoyerMail(&tel1, "Envoyer depuis mon pc");
    pc1.envoyerMail(&tel1, "Nouveau message envoyé depuis mon pc");

    //affiche les messages recu
    tel1.lireSesMails();

    // int a=2;
    // cout << "adresse de a = " <<&a<< " valeur de a = " << a << endl;

    // modifierA(a);//on fait un passage par valeur

    // cout << "adresse de a = " <<&a<< " valeur de a = " << a << endl;

    system("pause");

    return 0;
}