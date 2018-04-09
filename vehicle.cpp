#include <iostream>
#include "vehicles.h"
using namespace std;

//###############################
// Nastavenie triedy vehicle
// konštruktory a deštruktor
Vehicle::Vehicle(){
	wheelNum = 0;
	engineType = "";
	driverName = "";
	maxPack = 0;
}

Vehicle::Vehicle(int wheelNum, string engineType, string driverName, int maxPack){
	this->wheelNum = wheelNum;
	this->engineType = engineType;
	this->driverName = driverName;
	this->maxPack = maxPack;
}
Vehicle::~Vehicle(){}

// set & get metódy
int Vehicle::getWheelNum(){
	return wheelNum;
}
void Vehicle::setWheelNum(int wheelNum){
	this->wheelNum = wheelNum;
}


string Vehicle::getEngineType(){
	return engineType;
}
void Vehicle::setEngineType(string engineType){
	this->engineType = engineType;
}


string Vehicle::getDriverName(){
	return driverName;
}
void Vehicle::setDriverName(string driverName){
	this->driverName = driverName;
}


int Vehicle::getMaxPack(){
	return maxPack;
}
void Vehicle::setMaxPack(int maxPack){
	this->maxPack = maxPack;
}