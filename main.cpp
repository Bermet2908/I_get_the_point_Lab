#include <iostream>
#include "src/point.hpp"
using namespace std;

int main() {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);

    cout << p1 - p2 << endl;
    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;
    cout << (p1 / p2) << endl;

    return 0;
}
