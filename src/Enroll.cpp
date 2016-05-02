#include "Enroll.h"

#include "Student.h"
#include "Course.h"

// default constructor
Enroll::Enroll()
{ }

// constructor definition
Enroll::Enroll(const Student& s, const Course& c, double g)
{
    sid = s.sid;
    cid = c.cid;
    grade = g;
}
