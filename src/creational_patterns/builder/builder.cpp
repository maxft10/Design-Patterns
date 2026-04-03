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
    this->name = n;
    return *this;
}

CarBuilder& CarBuilder::setModel(string n){
    this->name = n;
    return *this;
}

CarBuilder& CarBuilder::setGate(int n){
    this->name = n;
    return *this;
}

CarBuilder& CarBuilder::setGPS(bool n){
    this->name = n;
    return *this;
}

Car CarBuilder::build(){
    cout<<Car(*this).gate<<endl
    return Car(*this);
}
