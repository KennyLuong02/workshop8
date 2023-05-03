#ifndef GRADE_H
#define GRADE_H
#include <string>
#include "Person.h"

using namespace std;

class Grade {
    private:
        int student_id;
        string assignment;
        int value;
        Person** persons;

    public:
        void addGrade(int student_id, string assignment, int value) {};
};

#endif