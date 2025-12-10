#include <iostream>
using namespace std;

union Bits {
    double d;
    unsigned char c[sizeof(double)];

    Bits(double n) {
        d = n;
    }


    void show_bits() {
        for (int j = sizeof(double) - 1; j >= 0; j--) {
            cout << "Bit pattern in byte " << j << ": ";
            for (int i = 128; i; i >>= 1) {
                if (i & c[j]) cout << "1";
                else cout << "0";
            }
            cout << "\n";
        }
    }
};

int main() {
    Bits ob(1991.829);
    ob.show_bits();

    return 0;
}
