#include <iostream>
#include <string>
using namespace std;

class StrType {
public:
    StrType(const string &str); 
    ~StrType();                 

    void show();

private:
    string p;
    int len;
};

StrType::StrType(const string &str) {
    p = str;
    len = str.length();
}

StrType::~StrType() {
    cout << "Destroying object holding: " << p << "\n";
}

void StrType::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    StrType s1("This is a test.");
    StrType s2("I like C++.");

    s1.show();
    s2.show();

    return 0;
}
