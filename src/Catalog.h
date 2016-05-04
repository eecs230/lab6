#pragma once

#include <iostream>
#include <list>
#include <map>
#include <utility>
#include <vector>

#include "Course.h"
#include "Student.h"
#include "Enroll.h"

using namespace std;

/* stores Catalog of students, courses, and enrollments in map and list containers */
struct Catalog
{
    std::map<int, Student> students;
    std::map<int, Course> courses;
    std::list<Enroll> enrollments;

    //find Student or Course from Catalog
    Student retrieve_student(int sid) const;
    Course retrieve_course(int cid) const;

    //get vector of enrollments for given sid
    vector<Enroll> get_all_enrollments(int sid) const;

    //add to containers
    void add_student(const Student& s);
    void add_course(const Course& c);
    void add_enrollment(const Enroll& e);

    //printout functions
    void print_courses() const;
    void print_students() const;
    void print_enrollments() const;
    void print_catalog() const;
};

extern Catalog CAESAR;
