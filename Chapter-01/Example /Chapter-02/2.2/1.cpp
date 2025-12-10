#include <iostream>

using namespace std;

class myclass

 {

    int a, b;
    public:

    myclass(int x, int y);

    void show();

 };

myclass::myclass(int x, int y)
 {

 cout << "In constructor\n";
    a = x;
    b = y;

 }
 void myclass::show()
 {
    cout << a <<" " << b << "\n";
 }

 int main()
 {

    myclass ob(4, 7);
    ob.show();


 return 0;
 }
