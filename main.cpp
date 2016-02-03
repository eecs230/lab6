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

    cout << "vec1: x=" << vec1.get_x() << ", y=" << vec1.get_y() << endl;
    cout << "vec2: x=" << vec2.get_x() << ", y=" << vec2.get_y() << endl;
    cout << "vec3: x=" << vec3.get_x() << ", y=" << vec3.get_y() << endl;

    cout << "----- \n";

    cout << "Test whether check_equal() - which uses operator overloading of '==' -- worked: \n";

    check_equal(vec1,vec2);
    check_equal(vec1,vec3);

    cout << "----- \n";

    cout << "Test whether setter functions worked: \n";

    vec1.set_x(2); // you can change values
    vec1.set_y(3); // you can change values
    cout << "(after assignment) vec1: x=" << vec1.get_x() << ", y=" << vec1.get_y() << endl;

    cout << "----- \n";

    cout << "Test whether add() function worked: \n";

    vec3 = add(vec1,vec2);
    cout << "(add)      vec3: x=" << vec3.get_x() << ", y=" << vec3.get_y() << endl;

    cout << "----- \n";

    cout << "Test whether subtract() function worked: \n";

    vec3 = subtract(vec1,vec2);
    cout << "(subtract) vec3: x=" << vec3.get_x() << ", y=" << vec3.get_y() << endl;

    cout << "----- \n";

    cout << "Test whether operator overloading of '+' and '-' worked: \n";

    vec3 = vec1 + vec2;
    cout << "(+) vec3: x=" << vec3.get_x() << ", y=" << vec3.get_y() << endl;
    vec3 = vec1 - vec2;
    cout << "(-) vec3: x=" << vec3.get_x() << ", y=" << vec3.get_y() << endl;

    cout << "----- \n";
}

int main() {
    run_tests();
}
