#include <iostream>
#include <cstring>
using namespace std;

enum YN { No, Yes };
enum Color { Red, Yellow, Green, Orange };

void Out(enum YN x);
char *clrNames[] = {"red", "yellow", "green", "orange"};

class Fruit {
public:
    enum YN annual;
    enum YN perennial;
    enum YN tree;
    enum YN tropical;
    enum Color clr;
    char Name[40];
};

class Apple : public Fruit {
    enum YN cooking;
    enum YN crunchy;
    enum YN eating;

public:
    void SetA(char *n, enum Color c, enum YN ck, enum YN crchy, enum YN e);
    void Show();
};

class OrangeFruit : public Fruit {
    enum YN juice;
    enum YN sour;
    enum YN eating;

public:
    void SetO(char *n, enum Color c, enum YN j, enum YN sr, enum YN e);
    void Show();
};


void Apple::SetA(char *n, enum Color c, enum YN ck, enum YN crchy, enum YN e) {
    strcpy(Name, n);
    annual = No;
    perennial = Yes;
    tree = Yes;
    tropical = No;
    clr = c;
    cooking = ck;
    crunchy = crchy;
    eating = e;
}

void Apple::Show() {
    cout << Name << " Apple is: \n";
    cout << "Annual: "; Out(annual);
    cout << "Perennial: "; Out(perennial);
    cout << "Tree: "; Out(tree);
    cout << "Tropical: "; Out(tropical);
    cout << "Color: " << clrNames[clr] << "\n";
    cout << "Good for cooking: "; Out(cooking);
    cout << "Crunchy: "; Out(crunchy);
    cout << "Good for eating: "; Out(eating);
    cout << "\n";
}

void OrangeFruit::SetO(char *n, enum Color c, enum YN j, enum YN sr, enum YN e) {
    strcpy(Name, n);
    annual = No;
    perennial = Yes;
    tree = Yes;
    tropical = Yes;
    clr = c;
    juice = j;
    sour = sr;
    eating = e;
}

void OrangeFruit::Show() {
    cout << Name << " Orange is: \n";
    cout << "Annual: "; Out(annual);
    cout << "Perennial: "; Out(perennial);
    cout << "Tree: "; Out(tree);
    cout << "Tropical: "; Out(tropical);
    cout << "Color: " << clrNames[clr] << "\n";
    cout << "Good for juice: "; Out(juice);
    cout << "Sour: "; Out(sour);
    cout << "Good for eating: "; Out(eating);
    cout << "\n";
}


void Out(enum YN x) {
    if (x == No)
        cout << "no\n";
    else
        cout << "yes\n";
}


int main() {
    Apple a1, a2;
    OrangeFruit o1, o2;

    a1.SetA((char*)"Red Delicious", Red, No, Yes, Yes);
    a2.SetA((char*)"Jonathan", Red, Yes, No, Yes);

    o1.SetO((char*)"Navel", Orange, No, No, Yes);
    o2.SetO((char*)"Valencia", Orange, Yes, Yes, No);

    a1.Show();
    a2.Show();
    o1.Show();
    o2.Show();

    return 0;
}
