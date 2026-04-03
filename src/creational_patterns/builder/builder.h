#ifndef CAR
#define CAR

#include <iostream>
#include <string>

using namespace std;

class CarBuilder;

// Main Class
class Car{

// Attributs
private:
    string name;
    string brand;
    string model;
    int gate;
    bool gps;

// Friend class
private:
    friend class CarBuilder;

// Constructor
public:
    Car(const CarBuilder& builder);
};


// Build Class
class CarBuilder{

// Attributs
public:
    string name;
    string brand;
    string model;
    int gate = 0;
    bool gps;

// Methods
public:
    CarBuilder& setName(string);
    CarBuilder& setBrand(string);
    CarBuilder& setModel(string);
    CarBuilder& setGate(int);
    CarBuilder& setGPS(bool);
    Car build();


};

#endif
