#include <iostream>
#include <cstring>
using namespace std;



class strtype {
    char p[25];
    int len;

public:
    strtype();
    void set(const char *ptr);
    void show();
};


strtype::strtype() {
    p[0] = '\0';
    len = 0;
}

void strtype::set(const char *ptr) {
    if(strlen(ptr) >= 25) {
        cout << "String too big\n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}


void strtype::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    strtype s1, s2;

    s1.set("This is a test.\n");
    s2.set("I like C++.");

    s1.show();
    s2.show();

    return 0;
}
