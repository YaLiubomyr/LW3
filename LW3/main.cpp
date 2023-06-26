#include <iostream>
#include "class.h"
using namespace std;

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    Vector3D* vectors = new Vector3D[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << endl << "Enter coordinates for Vector " << i + 1 << ":" << endl;
        vectors[i].setCoordinates();
    }

    Vector3D maxVector = vectors[0];
    double maxLength = maxVector.calculateLength();

    for (int i = 1; i < arraySize; i++) {
        double length = vectors[i].calculateLength();
        if (length > maxLength) {
            maxLength = length;
            maxVector = vectors[i];
        }
    }

    cout << endl << "Vector with the maximum length: " << endl;
    maxVector.displayCoordinates();
    cout << "Length: " << maxLength << endl;

    delete[] vectors;

    return 0;
}
