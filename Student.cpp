#include <string>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student(): Person() {};

Student::Student(string namee, int id): Person(namee), id(id) {};

void Student::addName(string namee) {name = namee;};

void Student::addID(int id) {this-> id = id;};