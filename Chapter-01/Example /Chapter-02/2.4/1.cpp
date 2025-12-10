 #include <iostream>
 using namespace std;

 class myclass
 {
    int a;
 public:

 myclass(int x);

    int get();
 };

 myclass::myclass(int x)

 {
    a = x;
 }

 int myclass::get()

 {
    return a;
 }
 int main()
 {
      myclass ob(119);
      myclass *p;
      p = &ob;

    cout << "Object: " << ob.get();
    cout << "\n";
    cout << "Pointer: " << p->get();

    return 0;
 }
