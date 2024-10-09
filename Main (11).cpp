#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle {
public:
  void displayVehicle() {
    cout << "I am a vehicle" << endl;
  }
};

// Derived class ThreeWheeler (inherits from Vehicle)
class ThreeWheeler : public Vehicle {
public:
  void displayThreeWheeler() {
    cout << "I have three wheels" << endl;
  }
};

// Derived class Helicopter (inherits from ThreeWheeler)
class Helicopter : public ThreeWheeler {
public:
  void displayHelicopter() {
    cout << "I am a helicopter" << endl;
  }
};

int main() {
  Helicopter myHelicopter;

  // Call methods of Helicopter, ThreeWheeler, and Vehicle through Helicopter object
  myHelicopter.displayHelicopter();     // Helicopter's method
  myHelicopter.displayThreeWheeler();   // ThreeWheeler's method
  myHelicopter.displayVehicle();        // Vehicle's method

  return 0;
}