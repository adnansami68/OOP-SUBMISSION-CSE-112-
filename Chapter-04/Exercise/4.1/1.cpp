#include <iostream>
using namespace std;

class letters {
    char ch;
public:
    letters(char c = ' ') { ch = c; }
    char get_ch() { return ch; }
};

int main() {
    letters arry[10];


    for (int i = 0; i < 10; i++) {
        arry[i] = letters('A' + i);
    }


    cout << "Contain these values: ";
    for (int i = 0; i < 10; i++) {
        cout << arry[i].get_ch() << " ";
    }
    cout << endl;

    return 0;
}
