#include <iostream>
using namespace std;

class base {
public:
    virtual void func();
};

class derived1 : public base {

};

class derived2 : public derived1 {
public:
    void func() {
        cout << "Using derived2 version of func" << endl;
    }
};

int main() {
    derived2 ob;
    ob.func();
    return 0;
}
