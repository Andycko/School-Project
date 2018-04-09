#include <iostream>
#include "vehicles.h"
using namespace std;


//###############################x
// Nastavenie treidy Car
// konštruktory a deštruktor

Car::Car(){
	fuelCapacity = 0;
	fuelCons = 0;
}
Car::Car(int wheelNum, string engineType, string driverName, int maxPack,
		 int fuelCapacity, int fuelCons) 
		 :Vehicle(wheelNum, engineType, driverName, maxPack){

	this->fuelCapacity = fuelCapacity;
	this->fuelCons = fuelCons;
}
Car::~Car(){}

// set & get metódy 
int Car::getFuelCapacity(){
	return fuelCapacity;
}
void Car::setFuelCapacity(int fuelCapacity){
	this->fuelCapacity = fuelCapacity;
}


int Car::getFuelCons(){
	return fuelCons;
}
void Car::setFuelCons(int fuelCons){
	this->fuelCons = fuelCons;
}