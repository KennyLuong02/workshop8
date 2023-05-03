#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Person.h"

using namespace std;

class Course {
    private:
        string name;
        int id;
        Person** persons;
        int counter;
    
    public:
        Course() {};
        Course(int id, string name) {};
        void addPerson(Person* p) {};
        int getCounter() {};
};

#endif