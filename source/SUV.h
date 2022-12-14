//------------------------------------------------------------------------------
// SUV.h : SUV class declaration and definition
//------------------------------------------------------------------------------
#ifndef SUV_H
#define SUV_H

#include <string>

#include "Automobile.h"

using std::string;

//------------------------------------------------------------------------------
// The SUV class represents a SUV.
//------------------------------------------------------------------------------
class SUV : public Automobile {
private:
	int passengers;

public:
	// Default constructor
	SUV() : Automobile() { passengers = 0; }

	// Constructor #2
	SUV(string SUVMake, int SUVModel, int SUVMileage,
		double SUVPrice, int SUVpassengers) :
		Automobile(SUVMake, SUVModel, SUVMileage, SUVPrice) {
		
		passengers = SUVpassengers;
	}

	// Accessor for passengers attribute
	int getPassengers() { return passengers; }
};
#endif