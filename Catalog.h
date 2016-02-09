#ifndef LAB5_CATALOG_H
#define LAB5_CATALOG_H

#include <map>
#include <list>
#include <utility>
#include <vector>
#include <iostream>
#include "Course.h"
#include "Student.h"
#include "Enroll.h"

using namespace std;

//declarations that Student and Enroll structs exist
struct Student;
struct Enroll;

/* stores Catalog of students, courses, and enrollments in map and list containers */
struct Catalog{

    map<int, Student> students;
    map<int, Course> courses;
    list<Enroll> enrollments;

    //find Student or Course from Catalog
    Student retrieve_student(int sid);
    Course retrieve_course(int cid);

    //get vector of enrollments for given sid
    vector<Enroll> get_all_enrollments(int sid);

    //add to containers
    void add_student(Student & s);
    void add_course(Course & c);
    void add_enrollment(Enroll & e);

    //printout functions
    void print_courses();
    void print_students();
    void print_enrollments();
    void print_catalog();
};

#endif //LAB5_CATALOG_H
