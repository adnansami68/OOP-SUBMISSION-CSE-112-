#include<iostream>
using namespace std;

class Base {
        int y;
    public:
    void sety (int i) {
        y = i;
    }
    int gety () {
        return y;
    }
    virtual void show() {
        cout<<"This is base class function"<<endl;
    }
};
class Derived : public Base {
    int x;
    public:
        void setx (int i) {
            x = i;
        }
    int getx () {
            return x;
        }
    void show() {
            cout<<"This is Derived class function"<<endl;
        }
};
int main() {
    Base *p;

    Base ob1;
    Derived ob2;
    p = &ob1;
    p->show();
    p = &ob2;
    p->show();

    return 0;
}
