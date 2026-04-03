#include <iostream>
#include <string>

#include "builder.h"

using namespace std;

int main(){

    CarBuilder B;
    Car car = B.setBrand("Opel")
                        .setName("Corsa")
                        .setGPS(false)
                        .setGate(5)
                        .setModel("IV")
                        .build();

    Car car2 = CarBuilder().build();

    cout<<car.toString()<<endl;
    cout<<car2.toString()<<endl;


    return 0;
}
