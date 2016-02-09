
#include "Course.h"

ostream & operator<<(ostream & o, Course & c)
{
    o << "department: " << c.dept << "; number: "<< c.cid;
    if (c.name != "[not given]")
        o << "; name: " << c.name;
    return o;
}

Course::Course(){};

Course::Course(int c, string d, string n):cid(c), dept(d), name(n){};