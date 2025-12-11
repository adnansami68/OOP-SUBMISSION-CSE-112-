 #include <iostream>
 using namespace std;

 class samp
 {

 int i;

 public:

    samp(int n) { i = n; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
 };

 void sqr(samp *o)
 {

    o->set_i(o->get_i() * o->get_i());
    cout<< o->get_i()<< "\n";

 }

 int main()

 {
    samp a(10);
    sqr(&a);

    cout << a.get_i();

    return 0;
 }
