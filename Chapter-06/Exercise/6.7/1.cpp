#include <iostream>
#include <cstring>

using namespace std;

class Alphabet {
 char *p;
 int len;
public:
 Alphabet(const char *s);
 ~Alphabet() { delete[] p; }
 char &operator[](int i);
};

Alphabet::Alphabet(const char *s) {
 len = strlen(s) + 1;
 p = new char[len];
 strcpy(p, s);
}

char &Alphabet::operator[](int i) {
 if (i < 0 || i >= len - 1) {
  cout << "Index out of range\n";
  exit(1);
 }
 return p[i];
}

int main() {
 Alphabet s("Hello");
 cout << s[1] << endl;
 s[1] = 'a';
 cout << s[1] << endl;
 return 0;
}
