#include "Enroll.h"

Enroll::Enroll(Student & s, Course & c, double g)
{
    sid = s.sid;
    cid = c.cid;
    grade = g;
}

Enroll::Enroll() { } //default constructor