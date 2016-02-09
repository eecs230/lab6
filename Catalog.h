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

struct Catalog{

    map<int, Student> students;
    map<int, Course> courses;
    list<Enroll> enrollments;

    Student retrieve_student(int sid);
    Course retrieve_course(int cid);

    void add_student(Student & s);
    void add_course(Course & c);
    void add_enrollment(Enroll & e);

    vector<Enroll> get_all_enrollments(int sid);

    void print_courses();
    void print_students();
    void print_enrollments();
    void print_catalog();
};

#endif //LAB5_CATALOG_H
