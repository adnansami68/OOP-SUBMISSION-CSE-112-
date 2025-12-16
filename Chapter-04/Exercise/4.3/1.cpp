#include <iostream>
using namespace std;

class Myclass
{
    int a, b;

public:
    Myclass(int n, int m) { a = n; b = m; }

    int add() { return a+b; }
    void show();
};

    void Myclass::show()
{
    int t;
    t = add();

    cout << t << "\n";
 }

int main(){

    Myclass ob(10, 14);
    ob.show();

    return 0;
}
