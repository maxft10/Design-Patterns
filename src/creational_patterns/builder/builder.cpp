#include <iostream>
#include <string>

#include "builder.h"

using namespace std;

Car::Car(const CarBuilder& builder){
    this->name = builder.name;
    this->brand = builder.brand;
    this->model = builder.model;
    this->gate = builder.gate;
    this->gps = builder.gps;

}

CarBuilder& CarBuilder::setName(string n){
    this->name = n;
    return *this;
}

CarBuilder& CarBuilder::setBrand(string n){
    this->brand = n;
    return *this;
}

CarBuilder& CarBuilder::setModel(string n){
    this->model = n;
    return *this;
}

CarBuilder& CarBuilder::setGate(int n){
    this->gate = n;
    return *this;
}

CarBuilder& CarBuilder::setGPS(bool n){
    this->gps = n;
    return *this;
}

Car CarBuilder::build(){
    return Car(*this);
}

string Car::toString(){
    string res = brand +" "+ name +" "+ model + "\n";
    res += to_string(gate) +" gates, ";
    res += gps ? "and gps" : "no gps";
    return res;
}
