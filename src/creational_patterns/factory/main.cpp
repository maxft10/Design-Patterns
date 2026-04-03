#include <iostream>
#include "factory.h"

using namespace std;

int main(){

    string s = "Electric";
    Car* v = CarFactory::build(s);
    if(v!=nullptr){
        v->start();
        delete v;
    }

    HybridFactory hf;
    Car* vv = hf.build_Car();
    vv->start();
    delete vv;

    Car* V = new CarHybrid();
    V->deliver();
    delete V;

    return 0;
}
