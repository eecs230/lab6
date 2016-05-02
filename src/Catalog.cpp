#include "Catalog.h"

#include <utility>
#include <vector>

using namespace std;

/* Add student to Catalog */
void Catalog::add_student(Student & s)
{
    std::pair<int, Student> s_p;
    s_p = std::make_pair(s.sid, s);

    students.insert(s_p);
}

/* Add student to Course: note, no duplicate cids allowed [known bug] */
void Catalog::add_course(Course & c)
{
    std::pair<int, Course> c_p;
    c_p = std::make_pair(c.cid, c);

    //ensure that no duplicate course_num is added to CAESAR [known bug - see Extension problem]
    std::map<int, Course>::iterator i = courses.find(c.cid);
    if(i== courses.end())
    {
        courses.insert(c_p);
    }
    else
    {
        std::cerr << "Error in Catalog::add_course()-- unable to add course; "
                         "duplicate course_num in CAESAR: " << c << '\n';
    }
}

/* retrieve student from Catalog*/
Student Catalog::retrieve_student(int sid)
{
    std::map<int, Student>::iterator j = students.find(sid);
    std::pair<int, Student> p = (*j);
    Student s = p.second;
    return s;
}

/* add enrollment to from Catalog; ensure both course and student associated with Enroll object are in Catalog*/
void Catalog::add_enrollment(Enroll & e)
{
    int the_sid = e.sid;

    if(students.find(the_sid) == students.end()) //student id not a key value in students map
    {
        std::cerr << "Error in Catalog::add_enrollment()-- Student: " <<
                the_sid << " is not a valid student in Catalog\n";
    }

    //check whether a course_id exists Catalog, and if not, call cerr << [your message here]

    if(courses.find(e.cid) == courses.end()) //student id not a key value in students map
    {
        std::cerr << "Error in Catalog::add_enrollment()-- Course: "<< e.cid
            << " is not a valid course in Catalog\n";
    }


    else
    {
        enrollments.push_front(e);
    }
}

/* retrieve course from Catalog*/
Course Catalog::retrieve_course(int cid)
{
    std::map<int, Course>::iterator k = courses.find(cid);

    if(k==courses.end())
    {
        std::cerr << "Catalog::retrieve_course() unable to find Course with "
                            "cid: " << cid << '\n';
    }

    std::pair<int, Course> p2 = (*k);
    Course c = p2.second;
    return c;
}

/* returns vector of all enrollments for student with student ID: sid */
std::vector<Enroll> Catalog::get_all_enrollments(int sid)
{
    vector<Enroll> output;

    for (list<Enroll>::iterator i = enrollments.begin(); i != enrollments.end(); i++)
    {
        Enroll e = *i;
        if(e.sid == sid)
        {
            output.push_back(e);
        }
    }

    return output;
}

void Catalog::print_students()
{
    cout << "Students:\n";

    for (map<int, Student>::iterator i = students.begin(); i != students.end(); i++)
    {
        pair<int, Student> p = *i;
        Student s = p.second;
        cout << "  " << s << '\n';
    }
}

void Catalog::print_courses()
{
    cout << "Courses:\n";

    for (map<int, Course>::iterator i = courses.begin(); i != courses.end(); i++)
    {
        pair<int, Course> p = *i;
        Course c = p.second;
        cout << "  " << c << '\n';
    }
}

void Catalog::print_enrollments()
{
    cout << "Enrollments: \n";

    for (list<Enroll>::iterator i = enrollments.begin(); i != enrollments.end(); i++)
    {
        Enroll e = *i;

        Student s = retrieve_student(e.sid);
        Course c = retrieve_course(e.cid);

        cout << "  " << "name: " << s.name << "; course: (" << c << "); "
                                                                            "grade: " << e.grade << '\n';
    }
}

void Catalog::print_catalog()
{
    print_students();
    print_courses();
    print_enrollments();
    cout << '\n';
}