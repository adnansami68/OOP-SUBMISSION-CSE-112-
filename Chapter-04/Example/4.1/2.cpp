#include <iostream>
using namespace std;

class Norml

 {
    int a;
public:

    Norml(int n) { a = n; }
    int get_a() { return a; }
 };


int main()

 {

    Norml ob[4]= {-1,-2,-3,-4 };

    int i;
    for(i=0; i<4; i++)


    cout << ob[i].get_a()<<endl ;
    cout << "\n";

    return 0;

 }
