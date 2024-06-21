#include "vector.h"
#include "math.h"

Vector::Vector() : x(0.0), y(0.0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}



double Vector::getX() const {
    return x;
}

double Vector::getY() const {
    return y;
}

double Vector::length() const {
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

Vector Vector::operator-(const Vector& other) const {
    return Vector(x - other.x, y - other.y);
}

Vector Vector::operator*(double scalar) const {
    return Vector(x * scalar, y * scalar);
}

