
#ifndef LAB5_ENROLL_H
#define LAB5_ENROLL_H

#include "Student.h"
#include "Course.h"

using namespace std;

struct Student;
struct Course;

//each student has a unique enrollment for each class he/she is in.
struct Enroll {

    int sid;
    int cid;
    double grade; //0-4 scale, 4 = 'A'

    Enroll();
    Enroll(Student &, Course &, double g);
};

#endif //LAB5_ENROLL_H
