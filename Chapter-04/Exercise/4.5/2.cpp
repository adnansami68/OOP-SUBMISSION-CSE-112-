#include <iostream>
using namespace std;

int main() {

    double *d = new double(-123.0987);


    cout << "Value: " << *d << endl;


    delete d;

    return 0;
}
