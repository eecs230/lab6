#include "vector2d.h"

// constructors
Vector2d::Vector2d() : x_{0}, y_{0} {};
Vector2d::Vector2d(double x, double y) {
    // implement here
}

// getters
double Vector2d::x() const {
    // implement here
}
double Vector2d::y() const {
    // implement here
}

// setters
void Vector2d::x(double x) {
    // implement here
}
void Vector2d::y(double y) {
    // implement here
}

// helper functions
Vector2d add(const Vector2d& a, const Vector2d& b) {
    // implement here
}
Vector2d subtract(const Vector2d& a, const Vector2d& b) {
    // implement here
}

bool operator==(const Vector2d& a, const Vector2d& b) {
    return (a.x()==b.x() && a.y()==b.y());
}

Vector2d operator+(const Vector2d& a, const Vector2d& b) {
    // implement here
}
Vector2d operator-(const Vector2d& a, const Vector2d& b) {
    // implement here
}