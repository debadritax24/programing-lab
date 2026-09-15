//! Write a program in C++ to create a friend class.
#include <iostream>
using namespace std;

class display;

class square {
    float arm_length;
    float area;
    float perimeter;

    public:
    static int count;

    square(float length) {
        arm_length = length;
        area = length * length;
        perimeter = 4 * length;
        ++count;
    }

    friend class display;
};

class display {
    public:
    void displayArea(const square& s) {
        cout << "Area: " << s.area << endl;
    }

    void displayPerimeter(const square& s) {
        cout << "Perimeter: " << s.perimeter << endl;
    }
};

int square::count = 0;

int main(){
    square s1(5);
    display d;
    d.displayArea(s1);
    d.displayPerimeter(s1);
    cout << square :: count << endl;
    return 0;
}