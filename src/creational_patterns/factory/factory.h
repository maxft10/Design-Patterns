#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car{
public:
    // Factory with abstract class
    virtual void start() = 0;
    virtual ~Car(){};
    void deliver();
};

class CarEssence: public Car{
public:
    virtual void start();
};

class CarElectric: public Car{
public:
    virtual void start();
};

class CarHybrid: public Car{
public:
    virtual void start();
};

class CarFactory{
public:
    // Classic Factory (static)
    static Car* build(string s);

    // Factory Method (instance)
    virtual Car* build_Car() = 0;

    virtual ~CarFactory(){};
};

class HybridFactory: public CarFactory{
public:
    virtual Car* build_Car();
};

// Abstract factory est une classe qui regroupe d'autres classes
// qui sont cohérentes
// entre elles, conceptuellement.
// Par exemple, on peut ajouter à CarFactory :
// virtual Moto* build_Car() = 0; Car et Moto sont liés.
// On peut remplacer Moto par Arbre. C'est faux conceptuellement mais correct
// au niveau du code.

#endif
