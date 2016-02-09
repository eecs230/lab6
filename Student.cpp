
#include "Student.h"

int STUDENT_ID_GENERATOR = 0; //global variable used to generate unique sids


//default constructor: initialize all member variables to default values
Student::Student() {}

//Student constructor
Student::Student(string n, int a, string d, bool h)
{
    sid = STUDENT_ID_GENERATOR;
    STUDENT_ID_GENERATOR ++; //increment unique Student ID generator for next student

    name = n;
    age = a;
    major = d;
    has_not_graduated = a;
}

//change major to new_major parameter
void Student::change_major(string new_major)
{
    major = new_major;
}

/*iterate over all enrollments and compute average gpa*/
double Student::compute_gpa()
{
    vector<Enroll> my_enrollments = CAESAR.get_all_enrollments(sid);

    double sum = 0;
    double num_courses = my_enrollments.size();

    for(int i= 0; i< num_courses; i++)
    {
        double grade = my_enrollments[i].grade;
        sum += grade;
    }

    cerr << "Student::compute_gpa() not yet implemented" << endl;

    return sum / num_courses;
}

ostream & operator<<(ostream & o, Student& s)
{
    o << s.name << "; sid: " << s.sid << "; " << s.age << " years old; major: " << s.major;
    o << "; graduated: " << boolalpha << !s.has_not_graduated;

    return o;
}

