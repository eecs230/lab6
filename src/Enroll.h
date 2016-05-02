#pragma once

struct Student;
struct Course;

//each student has a unique enrollment for each class he/she is in.
struct Enroll {
    int sid;
    int cid;
    double grade; // 0-4 scale, 4 = 'A'

    Enroll();
    Enroll(const Student&, const Course&, double grade);
};
