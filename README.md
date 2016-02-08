# eecs230 lab5

---------
Review
---------
- Classes & Structs practice
- Map container
- Iterators

---------
Exercise
---------
We are going to implement and use a simple database with the following schema:

students(sid: int, name: string, age: int)
course(cid: int, name: string, dept: department; prof: professor)
professor(name: string, dept department)


We are going to implement a class Vector2d which is composed of two members x_,y_, constructors, and getters/setters. We placed the declarations in a header vector2d.h. You are supposed to implement functions in vector2d.cpp.
The function signatures are provided for you. Implement functions where you see "Implement Here"

AFTER you've implemented the functions, if you run the program, it will print out the following:

```
Test whether Vector2d constructor() worked:
vec1: x=0, y=0
vec2: x=1, y=0
vec3: x=0, y=0
-----
Test whether check_equal() - which uses operator overloading of '==' -- worked:
two vectors are different
two vectors are same
-----
Test whether setter functions worked:
(after assignment) vec1: x=2, y=3
-----
Test whether add() function worked:
(add)      vec3: x=3, y=3
-----
Test whether subtract() function worked:
(subtract) vec3: x=1, y=3
-----
Test whether operator overloading of '+' and '-' worked:
(+) vec3: x=3, y=3
(-) vec3: x=1, y=3
-----
```

Change the initialization values in run_tests() in main.cpp and test many cases that you come up with. Become familiar with the code, and modify as you see fit. Ask questions!
