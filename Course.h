#ifndef LAB5_COURSE_H
#define LAB5_COURSE_H

#include "Student.h"
#include <iostream>

using namespace std;

struct Course {

    int cid;
    string dept;
    string name;

    Course();
    Course(int c, string d, string n = "[not given]");

};

ostream & operator<<(ostream &, Course &);

#endif //LAB5_COURSE_H
