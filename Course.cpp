#include <string>
#include "Person.h"
#include "Course.h"

using namespace std;

Course::Course() {
    name = " ";
    id = 0;
    counter = 0;
};

Course::Course(int id, string name) {
    this-> name = name;
    this-> id = id;
    counter = 0;
};

void Course::addPerson(Person* p) {
    persons[counter] = p;
    counter++;
};

int Course::getCounter() {
    return counter;
};