 #include <iostream>

 using namespace std;
 class Norml

 {
    int i;

 public:

 Norml(int n) { i = n; }
 void set_i(int n) { i = n; }
 int get_i() { return i; }
 };

 void sqr_it(Norml o)
 {
 o.set_i(o.get_i() * o.get_i());
 cout<< o.get_i()<<"\n" ;
 }
 int main()
 {
 Norml a(10);
 sqr_it(a);

 cout << a.get_i();
 return 0;
 }
