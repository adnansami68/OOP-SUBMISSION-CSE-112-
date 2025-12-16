#include <iostream>
using namespace std;



class Stack {
    char stck[10];
    int num;

public:

    Stack() : num(0) {}

    void push(char ch) {
        if (num == 10) {
            cout << "Stack is full\n";
            return;
        }
        stck[num++] = ch;
    }


    char Alphabet() {
        if (num == 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        return stck[--num];
    }
};

int main() {
    Stack S1, S2;

    S1.push('a'); S2.push('x');
    S1.push('b'); S2.push('y');
    S1.push('c'); S2.push('z');

    for (int i = 0; i < 3; i++)
        cout << "Alphabet S1: " << S1.Alphabet() << "\n";
    for (int i = 0; i < 3; i++)
        cout << "Alphabet S2: " << S2.Alphabet() << "\n";

    return 0;
}
