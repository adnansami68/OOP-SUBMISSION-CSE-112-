#include <iostream>

using namespace std;

class stack {
    char stck[10];
    int tos;
    char who;

public:
    stack(char c);
    void push(char ch);
    char pop();
};

stack::stack(char c) {
    tos = 0;
    who = c;
    cout << "Constructing stack " << who << "\n";
}

void stack::push(char ch) {
    if (tos == 10) {
        cout << "Stack " << who << " is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop() {
    if (tos == 0) {
        cout << "Stack " << who << " is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    stack s1('A'), s2('B');
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 5; i++)
        cout << "Pop s1: " << s1.pop() << "\n";

    for (i = 0; i < 5; i++)
        cout << "Pop s2: " << s2.pop() << "\n";

    return 0;
}
