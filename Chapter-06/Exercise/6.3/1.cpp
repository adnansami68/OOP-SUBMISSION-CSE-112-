#include <iostream>
#include <cmath>
using namespace std;

class coord {
    double x, y;

public:
    coord() : x(0), y(0) {}
    coord(double a, double b) : x(a), y(b) {}


    bool operator<(const coord &c) const {
        double mag1 = sqrt(x*x + y*y);
        double mag2 = sqrt(c.x*c.x + c.y*c.y);
        return mag1 < mag2;
    }


    bool operator>(const coord &c) const {
        double mag1 = sqrt(x*x + y*y);
        double mag2 = sqrt(c.x*c.x + c.y*c.y);
        return mag1 > mag2;
    }

    void show() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    coord c1(3, 4);
    coord c2(1, 2);

    cout << "Comparing coordinates: ";
    c1.show(); cout << " and "; c2.show(); cout << endl;

    if (c1 > c2)
        cout << "c1 > c2" << endl;
    else if (c1 < c2)
        cout << "c1 is less than c2" << endl;
    else
        cout << "c1 and c2 are equal" << endl;

    return 0;
}
