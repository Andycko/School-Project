// Projekt, informatika
// Kurierna služba

// import tried
#include "vehicles.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Car> cars;
vector<Bike> bikes;

int menu();
void makeVehicles();
void rmVehicles();
void showVeh();
int delPlanGenerate(bool isGoodTrafic, int packageNum, vector<Car> cars, vector<Bike> bikes);

int main()
{

    bool koniec = false;

    for (;;)
    {
        int volba = menu();
        switch(volba)
        {
            case (1): makeVehicles(); break;
            case (2): rmVehicles(); break;
            case (3): showVeh(); break;
            case (4): /*delPlanGenerate()*/; break;
            case (5): continue;  // navyse!
                      break;
            case (6): koniec=true;  break;
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
     cout << "(1) Zadanie vozidiel.\n";
     cout << "(2) Mazanie vozidiel.\n";
     cout << "(3) Zobrazenie vozidiel.\n";
     cout << "(4) Vypocet roznosu pre urcity pocet balickov.\n";
     cout << "(5) Znovuzobrazenie menu.\n";
     cout << "(6) Koniec.\n\n";
     cout << ": ";
     cin >> volba;
     return volba;
}



void makeVehicles(){
    string typVozidla, typMotora, meno;
    int objem, spotreba, pocBal, x = 0;
    cout << "\tAke vozidlo chcete zadat? (auto/bicykel): ";
    cin >> typVozidla;

    if(typVozidla=="auto"){
        x++;
        cout << "\n\tAky typ motora ma " << x << ". auto? (benzn/nafta): ";
        cin >> typMotora;

        cout << "\tAky objem nadrze ma " << x << ". auto? (l): ";
        cin >> objem;

        cout << "\tAku spotrebu ma " << x << ". auto? (l/100km): ";
        cin >> spotreba;

        cout << "\tKolko balickov sa zmesti do " << x << ". auta?: ";
        cin >> pocBal;

        cout << "\tAko sa vola sofer " << x << ". auta? (priezvisko): ";
        cin.clear();
        cin.ignore();
        getline(cin, meno);
        cout << endl;

        Car newCar(4, typMotora, meno, pocBal, objem, spotreba);

        cars.push_back(newCar);
    }
}


void rmVehicles(){
    int x;

    cout << "\n\tKtore auto chcete vymazat? : ";
    cin >> x;

    --x;
    cars.erase(cars.begin()+x);
}

void showVeh(){
    vector<Car>::iterator it;
    int x = 0;
    for (it = cars.begin(); it != cars.end(); ++it)
    {
        ++x;
        cout << endl << x << ". auto:";
        cout << "\n\tMeno sofera: " << it->getDriverName() << endl;
        cout << "\tTyp motora: " << it->getEngineType() << endl;
        cout << "\tObjem nadrze: " << it->getFuelCapacity() << endl;
        cout << "\tSpotreba: " << it->getFuelCons() << endl;
        cout << "\tPocet balickov: " << it->getMaxPack() << endl << endl;
    }
}

int delPlanGenerate(bool isGoodTrafic, int packageNum, vector<Car> cars, vector<Bike> bikes){

}