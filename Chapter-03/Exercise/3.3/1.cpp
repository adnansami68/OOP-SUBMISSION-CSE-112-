#include <iostream>
using namespace std;

class Who {
    char id;

public:

    Who(char c) : id(c) {
        cout << "Constructing Who #" << id << "\n";
    }


    ~Who() {
        cout << "Destroying Who #" << id << "\n";
    }


    void show() {
        cout << "Object id: " << id << "\n";
    }
};


Who Who2(char id) {
    Who temp(id);
    return temp;
}

int main() {
    cout << "Start main()\n";

    Who a('A');
    Who b = Who2('B');


    return 0;
}
