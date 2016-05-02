#include <iostream>
#include <string>
#include <mutex>
#include "Student.h"
#include "Enroll.h"
#include "Catalog.h"


using namespace std;

void populate_db(Catalog&); // function declaration
void run_two_tests(Catalog&); // function declaration

int main() {
    Catalog caesar;

    populate_db(caesar);
    caesar.print_catalog();

    // run_two_tests(caesar);
    // caesar.print_catalog();
}

void populate_db(Catalog& caesar) // function definition
{
    //Construct Students
    Student s_1("Miguel", 22, "EECS");
    Student s_2("Tina", 20, "Math");
    Student s_3("Mike", 18, "Chemical Engineering");

    //Add Students
    caesar.add_student(s_1);
    caesar.add_student(s_2);
    caesar.add_student(s_3);

    //Construct Courses
    Course algorithms(333, "EECS");
    Course programming(230, "EECS");
    Course algebra(101, "Math");

    //Add Courses
    caesar.add_course(algorithms);
    caesar.add_course(programming);
    caesar.add_course(algebra);

    //Construct Enrollments
    Enroll e(s_1, algorithms, 3.9);
    Enroll e2(s_1, programming, 2.1);
    Enroll e3(s_1, algebra, 3);
    Enroll e4(s_2, algorithms, 3.5);
    Enroll e5(s_3, algorithms, 3.0);

    //Add Enrollments
    caesar.add_enrollment(e);
    caesar.add_enrollment(e2);
    caesar.add_enrollment(e3);
    caesar.add_enrollment(e4);
    caesar.add_enrollment(e5);
}

void run_two_tests(const Catalog& caesar)
{
    //Will work once implementation of compute_gpa() completed
    Student s = caesar.retrieve_student(0);
    double gpa = s.compute_gpa(caesar);
    cout << s.name << " has gpa of " << gpa << '\n';

    //Attempt to add a course that's not in CAESAR to an enrollment -- will fail once invariant check implemented
    //Course econometrics(110, "ECON");
    //caesar.add_course(econometrics);
    //Enroll e(s,econometrics, 3.0);
    //caesar.add_enrollment(e);
}