#pragma once

#include <iostream>
#include <list>
#include <map>
#include <utility>
#include <vector>

#include "Course.h"
#include "Student.h"
#include "Enroll.h"

/* stores Catalog of students, courses, and enrollments in map and list containers */
struct Catalog
{
    std::map<int, Student> students;
    std::map<int, Course> courses;
    std::list<Enroll> enrollments;

    //find Student or Course from Catalog
    Student retrieve_student(int sid);
    Course retrieve_course(int cid);

    //get vector of enrollments for given sid
    std::vector<Enroll> get_all_enrollments(int sid);

    //add to containers
    void add_student(Student& s);
    void add_course(Course& c);
    void add_enrollment(Enroll& e);

    //printout functions
    void print_courses();
    void print_students();
    void print_enrollments();
    void print_catalog();
};

extern Catalog CAESAR;
