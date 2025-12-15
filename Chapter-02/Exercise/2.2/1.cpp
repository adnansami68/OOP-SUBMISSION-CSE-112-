#include <iostream>
using namespace std;

class Stack {
    char *x;
    int y;
    int size;

public:

    Stack(int s) {
        size = s;
        x = new char[size];
        y = 0;
    }


    ~Stack() {
        delete[] x;
    }


    void push(char ch) {
        if (y == size) {
            cout << "Stack is full\n";
            return;
        }
        x[y++] = ch;
    }


    char Alphabet() {
        if (y == 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        return x[--y];
    }
};

int main() {
    Stack s(5);
    s.push('A'); s.push('B'); s.push('C');

    cout << "Alphabet: " << s.Alphabet() << "\n";
    cout << "Alphabet: " << s.Alphabet() << "\n";

    return 0;
}
