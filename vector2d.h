#pragma once

class Vector2d {
private:
    double x_;
    double y_;

public:
    // constructors
    Vector2d();
    Vector2d(double x, double y);

    // getters
    double x() const;
    double y() const;

    // setters
    void x(double);
    void y(double);
};

// helper function
Vector2d add(const Vector2d&, const Vector2d&);
Vector2d subtract(const Vector2d&, const Vector2d&);

bool operator==(const Vector2d&, const Vector2d&);

Vector2d operator+(const Vector2d&, const Vector2d&);
Vector2d operator-(const Vector2d&, const Vector2d&);
