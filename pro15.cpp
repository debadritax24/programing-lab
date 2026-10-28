#include <iostream>
using namespace std;

class Queue {
    int q[100];
    int front = -1;
    int rear = -1;

public:
    void insert() {
        if (rear == 99) {
            cout << "Queue is full.\n";
            return;
        }

        int value;
        cout << "Enter the number to be inserted in the queue: ";
        cin >> value;
        q[++rear] = value;
    }

    void remove() {
        if (front == rear) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "The number deleted from the queue is: " << q[++front] << endl;
    }

    void display() {
        if (front == rear) {
            cout << "Queue is empty.\n";
            return;
        }

        for (int i = front + 1; i <= rear; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue queue;
    int choice;

    do {
        cout << "1. Insert  2. Delete  3. Display  0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                queue.insert();
                break;
            case 2:
                queue.remove();
                break;
            case 3:
                queue.display();
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}