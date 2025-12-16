#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtoi(const char *text, const char **end = 0, int base = 10) {
    return strtol(text, (char**)end, base);
}

int main() {
    const char *num1 = "1234";
    cout << "Decimal: " << mystrtoi(num1) << endl;
    cout << "Binary: "  << mystrtoi("1111", 0, 2) << endl;
}

