
#include "Course.h"

ostream & operator<<(ostream & o, Course & c)
{
    o << "department: " << c.dept << "; number: "<< c.cid;
    return o;
}

Course::Course(){};

Course::Course(int c, string d):cid(c), dept(d){};