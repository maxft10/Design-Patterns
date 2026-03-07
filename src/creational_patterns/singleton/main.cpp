#include <iostream>
#include "Singletons.h"

using namespace std;

int main(){

    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    cout<<s1<<endl;
    cout<<s2<<endl;

    delete s1;
    s1 = nullptr; // To avoid dangling
    cout<<s1<<endl;

    Singleton_sp* s3 = Singleton_sp::getInstance();
    Singleton_sp* s4 = Singleton_sp::getInstance();

    Singletonn& s5 = Singletonn::getInstance();
    Singletonn& s6 = Singletonn::getInstance();


    return 0;
}
