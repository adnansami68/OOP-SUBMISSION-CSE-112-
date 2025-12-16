#include <iostream>
using namespace std;

union SwapBytes {
    short int x;
    unsigned char b[2];
};

int main() {
    SwapBytes u;

    u.x = 0x1234;
    cout << "Original: 0x" << hex << u.x << "\n";


    unsigned char temp = u.b[0];
    u.b[0] = u.b[1];
    u.b[1] = temp;

    cout << "After swapping: 0x" << hex << u.x << "\n";

    return 0;
}

