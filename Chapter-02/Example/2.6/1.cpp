#include <iostream>
using namespace std;

class Norl {
    int i, j;

public:
    Norl(int a, int b);
    inline int divisible();
};

Norl::Norl(int a, int b) {
    i = a;
    j = b;
}

inline int Norl::divisible() {
    return !(i % j);
}

int main() {
    Norl ob1(10, 2), ob2(10, 3);


    if (ob1.divisible())
        cout << "10 divisible by 2\n";


    if (ob2.divisible())
        cout << "10 divisible by 3\n";

    return 0;
}
