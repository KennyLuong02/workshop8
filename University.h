#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "Course.h"

using namespace std;

class University {
    private: 
         string name;
         string location;
         Course* courses;

    public:
        University() {};
        University(string na, string loc) {};
        void addCourse(int id, string name) {};

};

#endif