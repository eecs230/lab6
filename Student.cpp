
#include "Student.h"

int STUDENT_ID_GENERATOR = 0; //global variable used to generate unique sids


//default constructor: initialize all member variables to default values
Student::Student()
{
    sid = STUDENT_ID_GENERATOR;
    STUDENT_ID_GENERATOR ++; //increment unique Student ID generator for next student

}

//Student constructor
Student::Student(string n, int a, department d, bool h)
{
    name = n;
    age = a;
    major = d;
    has_not_graduated = a;
}

//change major to new_major parameter
void Student::change_major(department new_major)
{
    major = new_major;
}

/*iterate over all completed courses, and compute average gpa;
 * Since completed_courses is a map-container and not a vector, container does not support random access.
 * Therefore, use an iterator. The syntax is (map<int, Course>::iterator i = completed_courses.begin()
 * while i != completed_courses.end(); i++)
*/
double Student::compute_gpa()
{
    double sum = 0;
    int num_courses_completed = completed_courses.size();

    for (map<int, Course>::iterator i = completed_courses.begin(); i != completed_courses.end(); i++) {

        //dereference the iterator to get the pair object
        auto my_kV_pair = *i; //auto lets compiler determine type. Here, auto is: pair<int, Course>

        Course c = my_kV_pair.second;

        //sum += c.grade;
    }

    return sum / num_courses_completed;
}

ostream & operator<<(ostream & o, Student& s)
{
    o << "student: " << s.name << "; sid: " << s.sid << "; " << s.age << " years old; major: " << get_dept_name(s.major);
    o << "; graduated: " << boolalpha << !s.has_not_graduated;

    return o;
}

