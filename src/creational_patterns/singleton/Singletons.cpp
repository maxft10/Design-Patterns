#include <iostream>
#include "Singletons.h"
#include <memory>

using namespace std;

// Classic singleton
Singleton* Singleton::instance = nullptr;

Singleton::Singleton(){}

Singleton* Singleton::getInstance(){

    if(!instance){
        instance = new Singleton();
    }

    return instance;
}

// Singleton with smart pointer

unique_ptr<Singleton_sp> Singleton_sp::instance_sp = nullptr;

Singleton_sp::Singleton_sp(){}

Singleton_sp* Singleton_sp::getInstance(){

    if(!instance_sp){
        instance_sp = unique_ptr<Singleton_sp>(new Singleton_sp);
    }
    cout<<instance_sp.get()<<endl;
    return instance_sp.get();
}

// Meyers Singleton

Singletonn::Singletonn(){}

Singletonn& Singletonn::getInstance(){
    static Singletonn instance = Singletonn();
    cout<<&instance<<endl;
    return instance;

}
