#include <iostream>
using namespace std;
class Coordinates
{
    int x, y;
public:
    Coordinates() { x=0; y=0; };
    Coordinates(int i, int j) { x=i; y=j; }
    void get_xy(int &i, int &j) { i=x; j=y; }
    friend Coordinates operator+(Coordinates ob1, int i);
    friend Coordinates operator+(int i, Coordinates ob1);
};

Coordinates operator+(Coordinates ob1, int i)
{
    Coordinates temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}

Coordinates operator+(int i, Coordinates ob1)
{
    Coordinates temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}
     int main()
{
    Coordinates o1(10, 10);
    int x, y;
    o1 = o1 + 10;
    o1.get_xy(x, y);
    cout<<"Coordinates are;"<<endl;
    cout << " X: " << x << ", Y: " << y << "\n";
    o1 = 99 + o1;
    o1.get_xy(x, y);
    cout << "X: " << x << ", Y: " << y << "\n";
    return 0;
}
