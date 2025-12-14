#include <iostream>
using namespace std;

class Base {

protected:
    int a, b;
public:
    void setab(int x, int y) {
        a=x;
        b=y;
    }

};
class Derived : protected Base {
    int c;
public:
    void setc(int x) {
        c=x;
    }
    void showabc() {
        cout<< a <<endl<< b <<endl<< c <<endl;
    }
};

int main() {
    Derived ob;

    //ob.setab(10,20);
    ob.setc(30);
    ob.showabc();

    return 0;

}
