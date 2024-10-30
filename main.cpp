#include <iostream>
#include "math.h"

using namespace std;

int main() {

    const Point<float> point(5.5f);
    const Vector<float> vector(2.2f);

    const Point<float> np = point + vector;
    const Vector<float> newVec = np - point;


    cout << np << endl;    // Výstup: Point(7.7)
    cout << vector << endl; // Výstup: Vector(2.2)
    cout << newVec << endl; // Výstup: Vector(2.2)

    


    return 0;
}