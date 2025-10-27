#pragma once
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val = 0.0, double y_val = 0.0);

    double getX() const;
    double getY() const;

    double operator-(const Point& other) const;
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point operator/(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

