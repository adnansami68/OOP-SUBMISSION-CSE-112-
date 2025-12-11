#include<iostream>
#include <locale>
using namespace std;

class Base {
    int x;
public:
    void set_x(int n) {
        x=n;
    }
    int get_x() {
        return x;
    }
    void show_x() {
        cout<<x<<endl;
    }
};

    class derived : private Base {
        int y;
    public:
        void set_y(int n) {
            y=n;
        }
        int get_x() {
            return y;
        }
        void showxy() {
            cout<<y<<endl;
        }
    };
int main() {
    derived ob;
    //ob.set_x(10); //ERROR karon private to derived class
    ob.set_y(20); //eta thik ache 

    ob.showxy();
    return 0;
}
