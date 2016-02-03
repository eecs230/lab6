#pragma once

// Class Vector2d represents a 2 dimensional vector originating at the origin and ending at the point (x_ , y_)
class Vector2d {
private:
    //member variables - private, meaning only accessible via getters and setters
    double x_;
    double y_;

public:
    // constructor declarations
    Vector2d(); //default constructor
    Vector2d(double x, double y);

    // getter declarations
    double get_x() const;
    double get_y() const;

    // setter declarations
    void set_x(double);
    void set_y(double);
};

// helper function
Vector2d add(const Vector2d&, const Vector2d&);
Vector2d subtract(const Vector2d&, const Vector2d&);

bool operator==(const Vector2d&, const Vector2d&);

Vector2d operator+(const Vector2d&, const Vector2d&);
Vector2d operator-(const Vector2d&, const Vector2d&);
