#include <iostream>
using namespace std;

 class Norml{
 int i;

 public:

        Norml(int n)
 {
        i = n;
        cout << "Constructing\n";
 }

        ~Norml() { cout << "Destructing\n"; }
        int get_i() { return i; }

 };

        int sqr(Norml o)
 {

        return o.get_i() * o.get_i();

 }

        int main()

 {

        Norml a(10);
        cout << sqr(a) << "\n";


        return 0;
 }
