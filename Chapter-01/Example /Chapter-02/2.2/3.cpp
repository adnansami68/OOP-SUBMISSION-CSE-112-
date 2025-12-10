#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    strtype(const char *ptr);
    ~strtype();
    void show();
};


strtype::strtype(const char *ptr) {
    len = strlen(ptr);
    p = new char[len + 1];
    if (!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}


strtype::~strtype() {
    cout << "Freeing p\n";
    delete[] p;
}


void strtype::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    strtype s1("This is a test."), s2("I like C++.");
    s1.show();
    s2.show();
    return 0;
}
