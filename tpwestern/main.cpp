#include <iostream>
#include <windows.h>

#include "cowboy.h"
#include "dame.h"
#include "brigand.h"
#include "arme.h"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    // les objets sont créer"
    Cowboy lucky("lucky luke", "coca cola");
    Dame jenny("jenny");
    Brigand joe("Joe");

    // cout <<endl<< "// 1. la rencontre ..." << endl;
    // lucky.sePresente();
    // jenny.sePresente();
    // joe.sePresente();

    // cout <<endl<< "// 2. Jenny se fait kidnapper par joe" << endl;
    // joe.kidnappe(&jenny);

    // cout <<endl<< "//3. Luky luke tire sur joe mais n'a pas d'arme" << endl;
    // lucky.tire(&joe);

    // cout <<endl<< "//4. Luky luke achete une arme" << endl;
    // lucky.acheterArme("Smith & Wesson");

    // cout <<endl<< "//5. Luky luke tire sur joe mais n'a pas de balle et recharge son arme avec 6  balles" << endl;
    // lucky.tire(&joe);

    // cout <<endl<< "//6. Luky luke tire sur joe" << endl;
    // lucky.tire(&joe);

    // cout <<endl<< "//7 Lucky Luke libère jenny" <<endl;
    // lucky.libere(&jenny);

    // cout <<endl<< "//8. Luky Luke emprisonne Joe" << endl;
    // lucky.emprisonne(&joe);

    cout <<endl<<"//1 Joe et lucky achete une arme et la charge."<<endl;
    lucky.acheterArme("Smith & Wesson");
    lucky.rechargerArme(6);
    joe.acheterArme("winchester");
    joe.rechargerArme(4);

    cout <<endl <<"//2 la recontre"<<endl;
    lucky.sePresente();
    jenny.sePresente();
    joe.sePresente();

    cout<<endl <<"//3 Jenny se fait kidnapper par joe"<<endl;
    joe.kidnappe(&jenny);

    cout<<endl <<"//4 Joe tire sur lucky luke"<<endl;
    joe.tire(&lucky);

    cout<<endl <<"//5 Lucky luke riposte"<<endl;
    lucky.tire(&joe);

    cout<<endl <<"//6 Lucky luke libère jenny"<<endl;
    lucky.libere(&jenny);

    cout<<endl <<"//7 Joe est emprisonné par lucky luke"<<endl;
    lucky.emprisonne(&joe);

    return 0;
}
