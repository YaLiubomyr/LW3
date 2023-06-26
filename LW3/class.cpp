#include "class.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector3D::calculateLength() {
    return sqrt(x * x + y * y + z * z);
}

void Vector3D::displayCoordinates() {
    cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
}

void Vector3D::setCoordinates() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
}
