#include <string>
#include "Gradebook.h"
#include "Course.h"
#include "University.h"

using namespace std;

University::University() {

};

University::University(string na, string loc) {
    name = na;
    location = loc;
    //make a Gradebook

};

void University::addCourse(int id, string name) {
    Course(id, name);
};