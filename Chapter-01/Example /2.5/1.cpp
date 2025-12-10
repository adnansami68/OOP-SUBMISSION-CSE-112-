
#include <iostream>
#include <cstring>
using namespace std;

class Account {
    double balance;
    char name[40];

public:

    Account(double b, const char* n) {
        balance = b;
        strcpy(name, n);
    }


    void show() {
        cout << "Name: " << name << " : $" << balance;
        if (balance < 0.0)
            cout << " ";
        cout << "\n";
    }
};

int main() {
    Account acc1(100.12, "Adnan Sami");
    Account acc2(-12.34, "Abdur Rahman");

    acc1.show();
    acc2.show();

    return 0;
}
