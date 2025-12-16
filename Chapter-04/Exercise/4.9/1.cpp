#include <iostream>
using namespace std;

void doubleValue(int &num) { 
    num *= 2;  
}

int main() {
    int x = 10;
    doubleValue(x); 
    cout << x << endl;
    return 0;
}
