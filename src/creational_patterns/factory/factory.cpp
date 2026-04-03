#include <iostream>
#include <string>

#include "factory.h"

using namespace std;

void Car::deliver(){
    cout<<"Delivery..."<<endl;
    start();
}

void CarEssence::start(){
    cout<<"Start Car with essence"<<endl;
}

void CarElectric::start(){
    cout<<"Start Car with electric"<<endl;
}

void CarHybrid::start(){
    cout<<"Start Car hybrid"<<endl;
}

Car* CarFactory::build(string s){
    if(s == "Electric"){
        return new CarElectric();
    }
    else if(s == "Essence"){
        return new CarEssence();
    }
    else{
        return nullptr;
    }
}

Car* HybridFactory::build_Car(){
    return new CarHybrid();
}
