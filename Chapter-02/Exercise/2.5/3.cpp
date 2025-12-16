#include <iostream>
using namespace std;

class Test {
public:

    union {
        int i;
        float f;
    };
};

int main() {
    Test t;
    t.i = 35;
    cout << t.i << "\n";

    t.f = 6.9;
    cout << t.f << "\n";

    return 0;
}
