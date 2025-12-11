#include <iostream>
using namespace std;

float f(float i) {
    return i / 2.0;
}

double f(double i) {
    return i / 3.0;
}

int main() {
    float x = 10.09;
    double y = 10.09;

    cout << f(x);      // unambiguous — float
    cout << f(y);      // unambiguous — double
    cout << f(10.0f);  // specify float to avoid ambiguity

    return 0;
}
