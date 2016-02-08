#ifndef LAB5_COURSE_H
#define LAB5_COURSE_H

#include "Student.h"
#include "Department.h"
using namespace std;

//map<int, Course> COURSE_CATALOG;

struct Course {

    int cid;
    department dept;

    Course(){};
    Course(int c, department d):cid(c), dept(d){};
};

#endif //LAB5_COURSE_H
