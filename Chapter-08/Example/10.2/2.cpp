#include <iostream>
using namespace std;

class Base {
    int x;
public:
    Base() {}
    Base(int i) {
        x = i;
    }

    void setx(int i) {
        x = i;
    }
    int getx() {
        return x;
    }


    virtual void func() {
        cout  << x << endl;
    }
};

class derived1 : public Base {
    int x;
public:
    derived1() {}
    derived1(int i) {
        x = i;
    }

    void setx(int i) {
        x = i;
    }
    int getx() {
        return x;
    }

    void func() {
        cout << x + x << endl;
    }
};

class derived2 : public Base {
    int x;
public:
    derived2() {}
    derived2(int i) {
        x = i;
    }

    void setx(int i) {
        x = i;
    }
    int getx() {
        return x;
    }

    void func() {
        cout << x + x + x << endl;
    }
};

int main() {
    Base *p;

    Base ob(10);
    derived1 ob1(5);
    derived2 ob2(7);


    p = &ob;
    p->func();


    p = &ob1;
    p->func();


    p = &ob2;
    p->func();

    return 0;
}
