#include <iostream>
using namespace std;

class Myclass {
    int x;

public:

    Myclass(int val) {
        x = val;
        cout << "Normal constructor: x = " << x << "\n";
    }


    Myclass(const Myclass &obj) {
        x = obj.x;
        cout << "Copy constructor: x = " << x << "\n";
    }

    int get() { return x; }
};

int main() {

    Myclass a(10);


    Myclass b = a;

    cout << "a.x = " << a.get() << ", b.x = " << b.get() << "\n";
    return 0;
}

