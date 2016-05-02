#include "Course.h"

#include <iostream>
#include <string>

//constructors
Course::Course()
{ }

Course::Course(int c, std::string d)
        : cid{c}, dept{d}
{ } // modify constructor and add default value, or add new constructor

//overloaded '<<' operator
std::ostream& operator<<(std::ostream& o, const Course& c)
{
    o << "department: " << c.dept << "; number: "<< c.cid;
    return o;
}
