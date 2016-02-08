//
// Created by Jason Brown on 2/8/16.
//

#ifndef LAB5_ENROLL_H
#define LAB5_ENROLL_H

#include "Department.h"

//each student has a unique enrollment for each class he/she is in.
struct Enroll {

    int sid;
    int cid;
    double grade; //0-4 scale, 4 = 'A'

    Enroll();
    Enroll(int s, int c, double g);
};

#endif //LAB5_ENROLL_H
