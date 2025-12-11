#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int [5];

    if(!p)
{
    cout << "Allocation error\n";
    return 1;
}
    int i;
    for(i=0; i<5; i++)
    p[i] = i;
    for(i=0; i<5; i++)

{
    cout << "Here is integer[" << i << "]: ";
    cout << p[i] << "\n";
}

    delete [] p;
    return 0;
 }
