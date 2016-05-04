#include "Catalog.h"

#include <stdexcept>
#include <utility>
#include <vector>

using namespace std;

/* Add student to Catalog */
void Catalog::add_student(const Student& s)
{
    students[s.sid] = s;
}

/* Add student to Course: note, no duplicate cids allowed [known bug] */
void Catalog::add_course(const Course& c)
{
    //ensure that no duplicate course_num is added to CAESAR [known bug - see Extension problem]
    if(courses.find(c.cid) == courses.end()) {
        courses[c.cid] = c;
    } else {
        throw runtime_error{"Catalog::add_course(): duplicate course number"};
    }
}

/* retrieve student from Catalog*/
Student Catalog::retrieve_student(int sid) const
{
    map<int, Student>::const_iterator j = students.find(sid);
    return j->second;
}

/* add enrollment to from Catalog; ensure both course and student associated with Enroll object are in Catalog*/
void Catalog::add_enrollment(const Enroll& e)
{
    int sid_to_add = e.sid;
    int cid_to_add = e.cid;

    bool student_exists = (students.find(sid_to_add)!= students.end());
    bool courses_exists = (courses.find(cid_to_add)!= courses.end());

    // Enforce the invariant here (check whether student and courses exists in CAESAR; if so, add enrollment..
    // if not, print (cerr) an error message so user is aware of problem)

    enrollments.push_front(e);
}

/* retrieve course from Catalog*/
Course Catalog::retrieve_course(int cid) const
{
    map<int, Course>::const_iterator k = courses.find(cid);

    if(k == courses.end()) {
        throw runtime_error{"Catalog::retrieve_course(): unknown course"};
    }

    return k->second;
}

/* returns vector of all enrollments for student with student ID: sid */
vector<Enroll> Catalog::get_all_enrollments(int sid) const
{
    vector<Enroll> output;

    for (const Enroll& e : enrollments) {
        if (e.sid == sid) {
            output.push_back(e);
        }
    }

    return output;
}

void Catalog::print_students() const
{
    cout << "Students:\n";

    for (auto i = students.cbegin(); i != students.cend(); ++i) {
        cout << "  " << i->second << '\n';
    }
}

void Catalog::print_courses() const
{
    cout << "Courses:\n";

    for (const auto& p : courses) {
        cout << "  " << p.second << '\n';
    }
}

void Catalog::print_enrollments() const
{
    cout << "Enrollments:\n";

    for (auto e : enrollments) {
        Student s = retrieve_student(e.sid);
        Course c = retrieve_course(e.cid);

        cout << "  " << "name: " << s.name << "; course: (" << c << "); grade: " <<
                e.grade << '\n';
    }
}

void Catalog::print_catalog() const
{
    print_students();
    print_courses();
    print_enrollments();
    cout << '\n';
}