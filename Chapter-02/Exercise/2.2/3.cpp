#include <iostream>
using namespace std;

class Box {
    double length, width, height;
    double volume;

public:

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }


    void vol() {
        cout << "Volume of the box: " << volume << "\n";
    }
};

int main() {
    Box b1(4,2,6);
    Box b2(5,6,8);

    b1.vol();
    b2.vol();

    return 0;
}

