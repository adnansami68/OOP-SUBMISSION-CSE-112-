#include <iostream>
#include <string>
using namespace std;

class Norml {
    string s;

public:
    void set(string str) {
    s = move(str);
}


    void show() const {
        cout << s << "\n";
    }
};

Norml input() {
    string str;
    Norml obj;
    cout << "Enter a string: ";
    getline(cin, str);
    obj.set(str);
    return obj;
}

int main() {
    Norml ob;
    ob = input();
    ob.show();
    return 0;
}
