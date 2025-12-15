#include <iostream>
using namespace std;



class CircularQueue {
private:
    int q[10];
    int head, tail;

public:
    CircularQueue() {
        head = tail = 0;
    }

    void enqueue(int num) {
        int next = (tail + 1) % 10;
        if (next == head) {
            cout << "Queue is full!\n";
            return;
        }
        q[tail] = num;
        tail = next;
    }

    int dequeue() {
        if (head == tail) {
            cout << "Queue is empty!\n";
            return -1;
        }
        int val = q[head];
        head = (head + 1) % 10;
        return val;
    }

    void show() {
        if (head == tail) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue contents: ";
        int i = head;
        while (i != tail) {
            cout << q[i] << " ";
            i = (i + 1) % 10;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue q;

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.show();

    cout << "Dequeued: " << q.dequeue() << "\n";
    q.show();

    return 0;
}
