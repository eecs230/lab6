#include <iostream>
#include <string>
#include "Student.h"
#include "Enroll.h"
#include "Catalog.h"
#include "Department.h"

using namespace std;

//CAESAR database
Catalog CAESAR;

// Approach: start with something considerably more difficult than they've seen, but that works.
// Learn to interact with it
// Learn to incrementally modify it
/* question ideas:
 *
 * Add new default parameter to constructor, assume age is 18
 * Modify Course ostream operator
 * Add new course
 * default age
 * bug: can't have courses with same number in different depts - use pair to fix this
 * sort - implement < operator for student
 * Change course to be a class
 * adjunct faculty
 * add a feature that rejects grades outside 0-4 range
 * Add name member variable to Courses
 * Implement "<<" overload for Course
 * */

void populate_db(); // function declaration

int main() {
    populate_db();
    CAESAR.print_catalog();
}

void populate_db() // function definition
{
    //Construct Students
    Student s_1("Jason", 29, "EECS");
    Student s_2("Sam", 20, "Math");
    Student s_3("Sarah", 23, "Chemical Engineering");

    //Add Students
    CAESAR.add_student(s_1);
    CAESAR.add_student(s_2);
    CAESAR.add_student(s_3);

    //Construct Courses
    Course algorithms(333, "EECS");
    //Course programming(230, "EECS");
    //Course algebra(101, "Math");

    //Add Courses
    CAESAR.add_course(algorithms);

    //Construct Enrollments
    Enroll e(s_1,algorithms, 4);
    Enroll e2(s_2,algorithms, 3.5);
    Enroll e3(s_3,algorithms, 3.0);

    //Add Enrollments
    CAESAR.add_enrollment(e);
    CAESAR.add_enrollment(e2);
    CAESAR.add_enrollment(e3);
}