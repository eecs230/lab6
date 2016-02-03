#include <iostream>

using namespace std;

#include "vector2d.h"

void check_equal(const Vector2d& a, const Vector2d& b) {
    if (a==b) cout << "two vectors are same" << endl;
    else cout << "two vectors are different" << endl;
}

int main() {
    Vector2d vec1,vec2(1,0),vec3;

    cout << "vec1: x=" << vec1.x() << ", y=" << vec1.y() << endl;
    cout << "vec2: x=" << vec2.x() << ", y=" << vec2.y() << endl;
    cout << "vec3: x=" << vec3.x() << ", y=" << vec3.y() << endl;

    check_equal(vec1,vec2);
    check_equal(vec1,vec3);

    vec1.x(2); // you can change values
    vec1.y(3); // you can change values
    cout << "(after assignment) vec1: x=" << vec1.x() << ", y=" << vec1.y() << endl;

    vec3 = add(vec1,vec2);
    cout << "(add)      vec3: x=" << vec3.x() << ", y=" << vec3.y() << endl;
    vec3 = subtract(vec1,vec2);
    cout << "(subtract) vec3: x=" << vec3.x() << ", y=" << vec3.y() << endl;

    vec3 = vec1 + vec2;
    cout << "(+) vec3: x=" << vec3.x() << ", y=" << vec3.y() << endl;
    vec3 = vec1 - vec2;
    cout << "(-) vec3: x=" << vec3.x() << ", y=" << vec3.y() << endl;

}
