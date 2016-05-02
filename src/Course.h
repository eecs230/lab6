#pragma once

#include <iostream>
#include <string>

/*represents unique course */
struct Course
{
    int cid;
    std::string dept;

    Course();
    Course(int c, std::string d);
    // modify constructor and add default value, or add new constructor
};

std::ostream& operator<<(std::ostream&, const Course&);

