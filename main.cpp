#include <iostream>

using namespace std;

#include "vector2d.h"

void check_equal(const Vector2d& a, const Vector2d& b) {
    if (a==b) cout << "two vectors are same" << endl;
    else cout << "two vectors are different" << endl;
}

void run_tests()
{
    Vector2d vec1,vec2(1,0),vec3;

    cout << "Test whether Vector2d constructor() worked: \n";

    cout << "vec1: x=" << vec1.getX() << ", y=" << vec1.getY() << endl;
    cout << "vec2: x=" << vec2.getX() << ", y=" << vec2.getY() << endl;
    cout << "vec3: x=" << vec3.getX() << ", y=" << vec3.getY() << endl;

    cout << "----- \n";

    cout << "Test whether check_equal() - which uses operator overloading of '==' -- worked: \n";

    check_equal(vec1,vec2);
    check_equal(vec1,vec3);

    cout << "----- \n";

    cout << "Test whether setter functions worked: \n";

    vec1.setX(2); // you can change values
    vec1.setY(3); // you can change values
    cout << "(after assignment) vec1: x=" << vec1.getX() << ", y=" << vec1.getY() << endl;

    cout << "----- \n";

    cout << "Test whether add() function worked: \n";

    vec3 = add(vec1,vec2);
    cout << "(add)      vec3: x=" << vec3.getX() << ", y=" << vec3.getY() << endl;

    cout << "----- \n";

    cout << "Test whether subtract() function worked: \n";

    vec3 = subtract(vec1,vec2);
    cout << "(subtract) vec3: x=" << vec3.getX() << ", y=" << vec3.getY() << endl;

    cout << "----- \n";

    cout << "Test whether operator overloading of '+' and '-' worked: \n";

    vec3 = vec1 + vec2;
    cout << "(+) vec3: x=" << vec3.getX() << ", y=" << vec3.getY() << endl;
    vec3 = vec1 - vec2;
    cout << "(-) vec3: x=" << vec3.getX() << ", y=" << vec3.getY() << endl;

    cout << "----- \n";
}

int main() {
    run_tests();
}
