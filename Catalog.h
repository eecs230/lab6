//
// Created by Jason Brown on 2/8/16.
//

#ifndef LAB5_CATALOG_H
#define LAB5_CATALOG_H

#include <map>
#include <list>
#include <utility>
#include <iostream>
#include "Course.h"
#include "Student.h"
#include "Enroll.h"

using namespace std;

struct Catalog{

    map<int, Student> students;
    map<int, Course> courses;
    //map<string, Professor> professors;
    list<Enroll> enrollments;

    void add_student(Student s)
    {
        pair<int, Student> s_p;
        s_p = make_pair(s.sid, s);

        students.insert(s_p);
    }

    void add_course(Course c)
    {
        pair<int, Course> c_p;
        c_p = make_pair(c.cid, c);

        courses.insert(c_p);
    }

    void add_enrollment(Enroll e)
    {
        int the_sid = e.sid;

        if(students.find(the_sid) == students.end()) //student id not a key value in students map
        {
            cerr << "Student attempting to be in enrolled is not a valid student in Catalog" << endl;
        }
        else
        {
           enrollments.push_front(e);
        }
    }


};

#endif //LAB5_CATALOG_H
