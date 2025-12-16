#include <iostream>
using namespace std;

class Num {
    int value;
public:
    Num(int value = 0) {
        this->value = value;
    }

    void setvalue(int value) {
        this->value = value;
    }

    int getvalue() {
        return this->value;
    }

    virtual void shownum() {
        cout << this->value << endl;
    }
};

class outhex : public Num {
public:
    outhex(int value) : Num(value) {}

    void shownum() {
        cout << "Hexadecimal Number: " << hex << getvalue() << endl;
    }
};

class outoct : public Num {
public:
    outoct(int value) : Num(value) {}

    void shownum() {
        cout << "Octal Number: " << oct << getvalue() << endl;
    }
};

int main() {
    Num *p;

    outhex ob1(255);
    outoct ob2(255);

    p = &ob1;
    p->shownum();

    p = &ob2;
    p->shownum();

    return 0;
}
