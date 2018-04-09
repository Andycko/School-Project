#include <iostream>
#include "vehicles.h"
using namespace std;


//###############################x
// Nastavenie treidy Bike
// konštruktory a deštruktor
Bike::Bike(){
	rider = "";
	stamina = 0;

}
Bike::Bike(int wheelNum, string engineType, string driverName, int maxPack,
		   int stamina, int pause, string rider)
		   :Vehicle(wheelNum, engineType, driverName, maxPack){

	this->stamina = stamina;
	this->pause = pause;
	this->rider = rider;
}
Bike::~Bike(){}

// set & get metódy

int Bike::getStamina(){
	return stamina;
}
void Bike::setStamina(int stamina){
	this->stamina = stamina;
}


int Bike::getPause(){
	return pause;
}
void Bike::setPause(int pause){
	this->pause = pause;
}


string Bike::getRider(){
	return rider;
}
void Bike::setRider(string rider){
	this->rider = rider;
}
