#include<iostream>
using namespace std;
class Base {
    int a;
public:
    void seta(int x) {
        this->a = x;
    }
    int geta() {
        return this->a;
    }
    void showa() {
        cout << a << endl;
    }
};
class Derived : public Base {
    int b;
public:
    void setb(int x) {
        this->b = x;
    }
    int getb() {
        return this->b;
    }
    void showb() {
        cout << b << endl;
    }

        void show_sum(){
            cout <<" Sum of a and b: "<<geta()+b<< endl;

        }

};
int main() {
    Derived Sum;
    Sum.seta(10);
    Sum.setb(20);
    
    Sum.show_sum();






    return 0;


}
