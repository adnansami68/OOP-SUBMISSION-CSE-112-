#include <iostream>
using namespace std;

class Myclass {
public:
    Myclass();
    Myclass(const Myclass &o);
    Myclass f();
};


Myclass::Myclass() {
    cout << "Constructing normally\n";
}


Myclass::Myclass(const Myclass &o) {
    cout << "Constructing copy\n";
}

Myclass Myclass::f() {
    Myclass temp;
    return temp;
}

int main() {
    Myclass obj;
    obj = obj.f();
    return 0;
}
