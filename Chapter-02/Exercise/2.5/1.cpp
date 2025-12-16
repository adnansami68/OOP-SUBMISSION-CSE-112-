#include <iostream>
using namespace std;



struct Stack {
    int stck[10];
    int top;


    Stack() {
        top = 0;
    }


    void Push(int x) {
        if (top == 10) {
            cout << "Stack is full\n";
            return;
        }
        stck[top++] = x;
    }


    int num () {
        if (top == 0) {
            cout << "Stack is empty\n";
            return -1;
        }
        return stck[--top];
    }
};

int main() {
    Stack s1;

    s1.Push(10);
    s1.Push(20);
    cout << s1.num() << "\n";
    cout << s1.num() << "\n";

    return 0;
}

