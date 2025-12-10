#include<iostream>

using namespace std;

class stack {
    char stck[10];
    int tos;

public:
    stack();
    void push(char ch);
    char pop();
};


stack::stack() {
    cout << "Constructing a stack\n";
    tos = 0;
}


void stack::push(char ch) {
    if (tos == 10) {
        cout << "Stack is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}


char stack::pop() {
    if (tos == 0) {
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    stack s1, s2;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(int i = 0; i < 3; i++)
        cout << "S1: " << s1.pop() << "\n";

    for(int i = 0; i < 3; i++)
        cout << "S2: " << s2.pop() << "\n";

    return 0;
}
