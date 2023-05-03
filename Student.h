#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"

using namespace std;

class Student: public Person {
    //private:
    protected:
        int id;

    public:
        Student() {};
        Student(string namee, int id) {};
        void addName(string namee) {};
        void addID(int id) {};
};


#endif