 #include <iostream>
 using namespace std;
 class Myclass
 {
 int x;
 public:

    Myclass() {
        x = 0;
        }
    Myclass(int n) {
        x = n;
        }

 int getx() {

      return x;
       }
 };

 int main()
 {

 Myclass a1(10);
 Myclass a2(20);

    cout << "a1: " << a1.getx() <<endl ;
    cout << "a2: " << a2.getx() <<endl ;


    return 0;
 }
