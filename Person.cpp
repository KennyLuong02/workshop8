#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
    name = " ";
};

Person::Person(string name) {
    this-> name = name;
};

void Person::addName(string name) {
    this-> name = name;
};