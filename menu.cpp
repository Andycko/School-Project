// Pouzitie nekonecnej slucky/nekonecneho cyklu
// pre riadenie interakcie s používate¾om - pre vytvorenie menu
#include <iostream>

// prototypy
int menu();
void vykonajUlohuJedna();
void vykonajUlohu(int);

using namespace std;

int main()
{
    bool koniec = false;

    for (;;)
    {
        int volba = menu();
        switch(volba)
        {
            case (1): vykonajUlohuJedna(); break;
            case (2): vykonajUlohu(2); break;
            case (3): vykonajUlohu(3); break;
            case (4): continue;  // navyse!
                      break;
            case (5): koniec=true;  break;
            default: cout << "Prosim vyberte znovu!\n";
                     break;
         }          // koniec prikazu switch

         if (koniec) break;
    }                // ukonèenie cyklu for

    return 0;
}                    // konec funkcie main()

int menu() {
    int volba;
     cout << " **** Menu ****\n\n";
     cout << "(1) Volba jedna.\n";
     cout << "(2) Volba dva.\n";
     cout << "(3) Volba tri.\n";
     cout << "(4) Znovuzobrazenie menu.\n";
     cout << "(5) Koniec.\n\n";
     cout << ": ";
     cin >> volba;
     return volba;
}

void vykonajUlohuJedna() {
    cout << "Uloha jedna!\n";
}

void vykonajUlohu(int cisloUlohy)
{
    if (cisloUlohy == 2) cout << "Uloha dva!\n";
    else cout << "Uloha tri!\n";
}
