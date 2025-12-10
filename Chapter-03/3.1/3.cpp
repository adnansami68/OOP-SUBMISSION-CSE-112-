#include <iostream>
#include <string>
using namespace std;

class StrType {
    string str;
public:

    StrType(const string &s) : str(s) {}


    void show() {
        cout << str << " length: " << str.length() << "\n";
    }
};

int main() {
    StrType s1("This is a test.");
    StrType s2("I like C++.");

    s1.show();
    s2.show();


    s2 = s1;

    s1.show();
    s2.show();

    return 0;
}
