#include <iostream>
using namespace std;

class MyClass {
    int a, b;
public:
    void set(int i, int j) { a = i; b = j; }
    void show() { cout << a << " " << b << "\n"; }
};

int main() {
    MyClass o1, o2;
    o1.set(10, 4);

    o2 = o1;  // Fixed: same class assignment
    o1.show();
    o2.show();

    return 0;
}
