 #include <iostream>
using namespace std;

class Arraytype
{
 int a[5];
public:
 Arraytype()
 {
  int i;
  for(i=0; i<5; i++)
   a[i] = i;
 }
 int &operator[](int i)
 {
  return a[i];
 }
};
int main()
{
 Arraytype ob;
 int i;
 for(i=0; i<5; i++)
  cout << ob[i] << " ";
 cout << "\n";

 for(i=0; i<5; i++)
  ob[i] = ob[i]+10;
 for(i=0; i<5; i++)
  cout << ob[i] << " ";
 return 0;
}
