#include <iostream>
using namespace std;

class Number {
 int *p;
 int size;
public:
 Number(int s);
 ~Number() { delete[] p; }
 int &operator[](int i);
};

Number::Number(int s) {
 size = s;
 p = new int[size];
 for (int i = 0; i < size; i++) p[i] = 0;
}

int &Number::operator[](int i) {
 if (i < 0 || i >= size) {
  cout << "Index out of range\n";
  exit(1);
 }
 return p[i];
}

int main() {
 Number a(5);
 for (int i = 0; i < 5; i++) a[i] = i * 3;
 for (int i = 0; i < 5; i++) cout << a[i] << " ";
 return 0;
}
