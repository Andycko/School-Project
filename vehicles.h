#include <iostream>
using namespace std;

//#################################
// vytvorenie vseobecnej triedy Vehicle, od ktorej budú ostatné typy vozidiel odvodené
class Vehicle{
protected:
	int wheelNum;
	//will be used just to show information about vehicle
	string engineType;
	string driverName;
	// package capacity
	int maxPack;


public:
	// konstruktor a destruktor
	Vehicle();
	Vehicle(int wheelNum, string engineType, string driverName, int maxPack);
	~Vehicle();

	// set & get metódy pre získanie protected premenných
	int getWheelNum();
	void setWheelNum(int wheelNum);

	string getEngineType();
	void setEngineType(string engineType);

	string getDriverName();
	void setDriverName(string driverName);

	int getMaxPack();
	void setMaxPack(int maxPack);

};


//#################################
// vytvorenie odvodenej triedy Car
class Car : public Vehicle{
protected:
	// fuel capacity in [l]
	int fuelCapacity;
	// fuel consumption in [l]/100km
	int fuelCons;

public:
	//konstruktor a destruktor
	Car();
	Car(int wheelNum, string engineType, string driverName, int maxPack,
		int fuelCapacity, int fuelCons);
	~Car();

	//set & get metódy
	int getFuelCapacity();
	void setFuelCapacity(int fuelCapacity);

	int getFuelCons();
	void setFuelCons(int fuelCons);

};


//#################################
// vytvorenie odvodenej triedy MotorBike
class Bike : public Vehicle{
protected:
	// riders name, just for info
	string rider;
	// stamina of the rider in [min]
	int stamina;
	// after every complete stamina drain, 10 mins pause
	int pause;

public:
	Bike();
	Bike(int wheelNum, string engineType, string driverName, int maxPack,
		 int stamina, int pause, string rider);
	~Bike();

	//set & get metódy
	int getStamina();
	void setStamina(int stamina);

	int getPause();
	void setPause(int pause);
	
	string getRider();
	void setRider(string rider);

	//metódy

};