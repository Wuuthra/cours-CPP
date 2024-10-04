#include <iostream>
#include <windows.h>

#include "Humain.h"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Humain lucky("Lucky Luke", "coca cola");
    cout << "Une histoire sur " << lucky.getNom() << endl
         << endl;
    lucky.parle("Je parle !"); // appel de la méthode parle()
    Humain joe("Joe Dalton");
    cout << "La boisson favorite de " << lucky.getNom() << " est " << endl;
    cout << lucky.getBoissonFavorite() << endl
         << endl;

    cout << "Une histoire sur " << joe.getNom() << endl
         << endl;
    cout << "La boisson favorite de " << joe.getNom() << " est " << endl;
    cout << joe.getBoissonFavorite() << endl
         << endl;

    joe.setBoissonFavorite("Whisky"); // maintenant Joe boit du Whisky
    cout << "La boisson favorite de " << joe.getNom() << " est maintenant: " << endl;
    cout << joe.getBoissonFavorite() << endl
         << endl;

    joe.setBoissonFavorite("Whisky");

    cout << "Une histoire sur " << lucky.getNom() << endl;
    lucky.sePresente();
    lucky.boit();

    cout << "Une histoire sur " << joe.getNom() << endl;
    joe.sePresente();
    joe.boit();
    system("pause");

    return 0;
}