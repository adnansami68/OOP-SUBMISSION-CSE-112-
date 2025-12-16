#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{
    char *p;
public:
    strtype(const char *s);
    ~strtype() { delete[] p; }
    char* get() const { return p; }
};

strtype::strtype(const char *s)
{
    int l = strlen(s) + 1;
    p = new char[l];
    if (!p)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, s);
}


void show(const strtype &x)
{
    char *s = x.get();
    cout << s << "\n";
}

int main()
{
    strtype a("Hello"), b("There");
    show(a);
    show(b);
    return 0;
}
