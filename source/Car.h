//------------------------------------------------------------------------------
// Car.h : Car class declaration and definition
//------------------------------------------------------------------------------
#ifndef CAR_H
#define CAR_H

#include <string>

#include "Automobile.h"

using std::string;

//------------------------------------------------------------------------------
// The Car class represents a car.
//------------------------------------------------------------------------------
class Car : public Automobile {
private:
   int doors;
   
public:
   // Default constructor
   Car() : Automobile()
   { doors = 0; }
   
   // Constructor #2
   Car(string carMake, int carModel, int carMileage,
       double carPrice, int carDoors) :
       Automobile(carMake, carModel, carMileage, carPrice)
   { doors = carDoors; }
   
   // Accessor for doors attribute
   int getDoors()
   { return doors; }
};
#endif