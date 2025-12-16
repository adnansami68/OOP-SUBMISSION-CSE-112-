#include <iostream>
using namespace std;

class Coord {
    double x, y;
public:
    Coord() : x(0), y(0) {}
    Coord(double a, double b) : x(a), y(b) {}

    Coord operator++() {
        ++x; ++y;
        return *this;
    }

    Coord operator++(int) {
        Coord temp = *this;
        x++; y++;
        return temp;
    }

    Coord operator+(const Coord &c) const {
        return Coord(x + c.x, y + c.y);
    }

    Coord operator+() const {
        return Coord(x < 0 ? -x : x, y < 0 ? -y : y);
    }

    void show() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Coord c1(-3, 4), c2(2, -5);
    ++c1;
    c1.show();
    c2++;
    c2.show();
    Coord c3 = c1 + c2;
    c3.show();
    Coord c4 = +c3;
    c4.show();
    return 0;
}
