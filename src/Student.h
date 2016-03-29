#ifndef LAB5_STUDENT_H
#define LAB5_STUDENT_H

#include <string>
#include <map>
#include <vector>
#include <iostream>
#include "Course.h"
#include "Enroll.h"
#include "Catalog.h"

struct Catalog;

extern Catalog CAESAR;

using namespace std;


/* represents student object*/
struct Student {

    //member variables
    int sid; //student id
    string name;
    int age;
    string major;
    bool has_not_graduated;

    //constructors
    Student(); //default constructor
    Student(string n, int a, string d, bool h = true); //note: bool h = true means default value is true, unless specified otherwise

    //function declarations
    void enroll_in_course(int cid);
    void receive_grade(int cid, int grade);
    double compute_gpa();
    void change_major(string new_major);

};

//operator overloading
ostream & operator<<(ostream &, Student&);

#endif //LAB5_STUDENT_H
