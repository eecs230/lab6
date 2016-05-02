#include "Student.h"

#include "Enroll.h"
#include "Catalog.h"

#include <iomanip>
#include <string>
#include <vector>

// global variable used to generate unique sids
static int STUDENT_ID_GENERATOR = 0;

//default constructor: initialize all member variables to default values
Student::Student()
{ }

//Student constructor
Student::Student(std::string n, int a, std::string d, bool h)
{
    sid = STUDENT_ID_GENERATOR;
    ++STUDENT_ID_GENERATOR; //increment unique Student ID generator for next student

    name = n;
    age = a;
    major = d;
    has_not_graduated = h;
}

//change major to new_major parameter
void Student::change_major(std::string new_major)
{
    major = new_major;
}

/*iterate over all enrollments and compute average gpa*/
double Student::compute_gpa(const Catalog& catalog)
{
    std::vector<Enroll> my_enrollments = catalog.get_all_enrollments(sid);

    //implement here
    //once implementation complete, delete this
    throw runtime_error{"Student::compute_gpa() not yet implemented"};
}

//operator overloaded
std::ostream& operator<<(std::ostream& o, const Student& s)
{
    o << s.name << "; sid: " << s.sid << "; " << s.age << " years old; major: " << s.major;
    o << "; graduated: " << std::boolalpha << !s.has_not_graduated;

    return o;
}

