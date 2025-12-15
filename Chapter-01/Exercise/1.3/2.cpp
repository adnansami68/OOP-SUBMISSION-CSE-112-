#include <iostream>
using namespace std;

int main() {
    double feet;

    while (true) {

        cout << "Enter feet: ";
        cin >> feet;

        if (feet == 0)
            break;

        double inches = feet * 12;
        cout << feet << " feet = " << inches << " inches\n";
    }

    return 0;
}

