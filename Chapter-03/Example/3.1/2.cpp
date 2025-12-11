#include <iostream>
using namespace std;




class Stack {
    char stck[10];
    int num;

public:
    Stack();
    void push(char ch);
    char Alphabet();
};


Stack::Stack() {
    cout << "Constructing a stack\n";
    num = 0;
}


void Stack::push(char ch) {
    if (num == 10) {
        cout << "Stack is full\n";
        return;
    }
    stck[num++] = ch;
}


char Stack::Alphabet() {
    if (num == 0) {
        cout << "Stack is empty\n";
        return 0;
    }
    return stck[--num];
}

int main() {
    Stack s1, s2;


    s1.push('a');
    s1.push('b');
    s1.push('c');


    s2 = s1;


    for (int i = 0; i < 3; i++)
        cout << "Alphabet s1: " << s1.Alphabet() << "\n";


    for (int i = 0; i < 3; i++)
        cout << "Alphabet s2: " << s2.Alphabet() << "\n";

    return 0;
}
