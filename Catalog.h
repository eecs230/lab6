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
    list<Enroll> enrollments;

    Student retrieve_student(int sid);
    Course retrieve_course(int cid);

    void add_student(Student & s);
    void add_course(Course & c);
    void add_enrollment(Enroll & e);

    void print_courses();
    void print_students();
    void print_enrollments();
    void print_catalog();
};

#endif //LAB5_CATALOG_H
