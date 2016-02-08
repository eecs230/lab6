#include <iostream>
#include <string>
#include "Student.h"
#include "Enroll.h"
#include "Catalog.h"
#include "Department.h"

using namespace std;

//CAESAR database
Catalog NORTHWESTERN_DB;

// Approach: start with something considerably more difficult than they've seen, but that works.
// Learn to interact with it
// Learn to incrementally modify it
/* question ideas:
 *
 * Add new default parameter to constructor, assume age is 18
 * Modify Course ostream operator
 * Add new course
 * bug: can't have courses with same number in different depts - use pair to fix this
 * sort - implement < operator for student
 * Change course to be a class
 * adjunct faculty
 * add a feature that rejects grades outside 0-4 range
 * Add name member variable to Courses
 * */

void run_tests(); // function declaration

int main() {
    run_tests();
}

void run_tests() // function definition
{


    Student s_1 = Student();

    //("Jason", 29, EECS, true);

    //NORTHWESTERN_DB.add_student(s_1);

    //Course algorithms(333, EECS);
    //Course programming(230, EECS);
    //Course algebra(101, MATH);


    //Enroll e(s_1.sid,333, 4);
    //NORTHWESTERN_DB.add_enrollment(e);






    //pair<int, Course> algorithms_pair = pair<

    //COURSE_CATALOG.insert(algorithms.cid, algorithms);







}