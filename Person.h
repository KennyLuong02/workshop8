#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person {
    //private:
    protected:
        string name;

    public:
        Person() {};
        Person(string name) {};
        void addName(string name) {};

};


#endif