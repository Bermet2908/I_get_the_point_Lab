#include "point.hpp"
#include <cmath>
using namespace std;

Point::Point(double x_val, double y_val) {
    x = x_val;
    y = y_val;
}

double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}

double Point::operator-(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

Point Point::operator/(const Point& other) const {
    double midX = (x + other.x) / 2.0;
    double midY = (y + other.y) / 2.0;
    return Point(midX, midY);
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}


