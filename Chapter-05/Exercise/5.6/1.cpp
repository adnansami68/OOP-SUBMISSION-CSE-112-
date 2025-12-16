#include <iostream>
using namespace std;

int dif(int a, int b) { return a - b; }
float dif(float a, float b) { return a - b; }

int main() {
    int (*pInt)(int, int) = dif;
    float (*pFloat)(float, float) = dif;

    cout << pInt(5, 3) << endl;
    cout << pFloat(5.5, 2.5) << endl;

    return 0;
}
