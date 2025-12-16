#include <iostream>

using namespace std;

class Count {
    int *p;
    int size;
public:
    Count(int s);
    ~Count() { delete[] p; }
    int &put(int i);
    int get(int i);
    Count &operator=(const Count &ob);
};

Count::Count(int s) {
    size = s;
    p = new int[size];
    for (int i = 0; i < size; i++) p[i] = 0;
}

int &Count::put(int i) {
    if (i < 0 || i >= size) {
        cout << "Index out of range\n";
        exit(1);
    }
    return p[i];
}

int Count::get(int i) {
    if (i < 0 || i >= size) {
        cout << "Index out of range\n";
        exit(1);
    }
    return p[i];
}

Count &Count::operator=(const Count &ob) {
    if (this == &ob) return *this;
    delete[] p;
    size = ob.size;
    p = new int[size];
    for (int i = 0; i < size; i++) p[i] = ob.p[i];
    return *this;
}

int main() {
    Count a(5), b(5);
    for (int i = 0; i < 5; i++) a.put(i) = i * 2;
    b = a;
    for (int i = 0; i < 5; i++) cout << b.get(i) << " ";
    return 0;
}
