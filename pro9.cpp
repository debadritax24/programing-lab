//! write a program in c++ to implement a  student stack consisting of name and roll number //
#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

int main() {
    vector<Student> stack;
    int choice;

    do {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;

            cout << "Enter name: ";
            cin >> s.name;

            cout << "Enter roll number: ";
            cin >> s.roll;

            stack.push_back(s);
        }

        else if (choice == 2) {
            if (stack.empty()) {
                cout << "Stack Underflow";
            } else {
                cout << "Deleted: " << stack.back().name << " "
                     << stack.back().roll << endl;
                stack.pop_back();
            }
        }

        else if (choice == 3) {
            if (stack.empty()) {
                cout << "Stack is empty";
            } else {
                cout << "\nStudent Stack:\n";
                for (int i = stack.size() - 1; i >= 0; i--) {
                    cout << "Name: " << stack[i].name
                         << ", Roll: " << stack[i].roll << endl;
                }
            }
        }

    } while (choice != 4);

    return 0;
}