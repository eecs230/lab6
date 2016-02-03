# eecs230 lab5

---------
Review
---------
- Classes (private by default) versus Structs (public by default)
- operator overloading (in this lab you will overload '==', '+', and '-'
- scope (global, local, loop) and protection level (public, private)
- passing argument by reference (versus by value)

---------
Exercise
---------
We are going to implement a class Vector2d which is composed of two members x_,y_, constructors, and getters/setters. We placed the declarations in a header vector2d.h. You are supposed to implement functions in vector2d.cpp.
The function signatures are provided for you. Implement functions where you see "Implement Here"

AFTER you've implemented the functions, if you run the program, it will print out the following:

vec1: x=0, y=0
vec2: x=1, y=0
vec3: x=0, y=0
two vectors are different
two vectors are same
(after assignment) vec1: x=2, y=3
(add)      vec3: x=3, y=3
(subtract) vec3: x=1, y=3
(+) vec3: x=3, y=3
(-) vec3: x=1, y=3
```

Change the initialization values in run_tests() in main.cpp and test many cases that you come up with. Become familiar with the code, and modify as you see fit. Ask questions!
