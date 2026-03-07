#ifndef SINGLETON
#define SINGLETON

#include <memory>

using namespace std;

// Classic singleton

class Singleton{

private:
    static Singleton* instance;
    Singleton();

public:
    static Singleton* getInstance();

};

// Singleton with smart pointer

class Singleton_sp{

private:
    static unique_ptr<Singleton_sp> instance_sp;
    Singleton_sp();

public:
    static Singleton_sp* getInstance();

};

// Meyers Singleton

class Singletonn{

private:
    Singletonn();

public:
    static Singletonn& getInstance();
    Singletonn(const Singletonn&) = delete;
    void operator=(const Singletonn&) = delete;

};


#endif
