# eecs230 lab6

## Review

- Classes & Structs
- Other containers besides vectors, such as map and list
- Iterators

## Introduction

We are going to work with a database with the following schema:

- students(sid: int, name: string, age: int, hasNotGraduated: bool)
- course(cid: int, dept: string)
- enroll(sid: int, cid: int, grade:int)

The Catalog that stores this information has global variable name CAESAR. It is pre-populated with the following:

```
Students:
  Miguel; sid: 0; 22 years old; major: EECS; graduated: false
  Tina; sid: 1; 20 years old; major: Math; graduated: false
  Mike; sid: 2; 18 years old; major: Chemical Engineering; graduated: false
Courses:
  department: Math; number: 101
  department: EECS; number: 230
  department: EECS; number: 333
Enrollments:
  name: Mike; course: (department: EECS; number: 333); grade: 3
  name: Tina; course: (department: EECS; number: 333); grade: 3.5
  name: Miguel; course: (department: Math; number: 101); grade: 3
  name: Miguel; course: (department: EECS; number: 230); grade: 2.1
  name: Miguel; course: (department: EECS; number: 333); grade: 3.9
```

## Tasks

1. Add the following to CAESAR:
    - students: yourself, and one other classmates
    - courses: two classes that occurred in the Fall
    - enrollments: students X courses (ie, add an enrollment for each new student-course pair)

   Print out CAESAR and verify that everything worked correctly.

2. Currently, courses are represented by course_number and department. Add a member variable to Course that represents the name of the course.
   Ie, EECS_230 Course object has member variable name "Programming For Engineers". Print out CAESAR and verify that everything worked correctly.

3. Currently, `Student::compute_gpa()` is not implemented. Finish the implementation and verify that the function works correctly. Verify that `Miguel has gpa of 3.0`.

4. Add an **invariant** in `Catalog::add_enrollment()` that ensures a student and course are in CAESAR, before an Enrollment involving the student or course is added to CAESAR.
   If this **invariant** is not met, throw a `runtime_error`.

## Extension

1. Add an **invariant** in the `Enroll` struct that ensures grades be in the range [0,4], before constructing a valid Enroll object. If this **invariant** is not met, throw a `runtime_error`.

2. Modify the student() constructor to assume that new students have an age of 18 years old, unless told otherwise. Ie, make age 18 the default value. For an example, notice that hasNotGraduated has a default value of `true`.

3. Implement a new function called `Catalog::find_phiBetaKappa()` that returns a list of Students who have gpas > 3.7. Hint: use `Student::compute_gpa()`.

4. Currently, there is a bug in the database where all course_numbers must be unique (ie., there can't be both a CHEM_ENG 101 and MECH_ENG 101). Fix this bug by having the courses take in a `pair<int cid, string dept>` as it's primary key.