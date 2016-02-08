#ifndef LAB5_COURSE_H
#define LAB5_COURSE_H

#include "Student.h"
#include "Department.h"
#include <iostream>

using namespace std;

struct Course {

    int cid;
    string dept;

    Course();
    Course(int c, string d);

};

ostream & operator<<(ostream &, Course &);

#endif //LAB5_COURSE_H
