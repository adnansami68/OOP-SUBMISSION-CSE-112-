#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    string phone;
public:
    Person(string n, string p) {
        name = n;
        phone = p;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main() {

    Person *p = new Person("Adnan Sami", "017XXXXXXXX");


    p->show();


    delete p;

    return 0;
}
