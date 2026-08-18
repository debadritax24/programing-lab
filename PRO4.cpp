//! write a c/c++ program to print fibonacci series using recursion ( without using for loop)

#include <iostream>

// Function to print Fibonacci series recursively without using any loop
void printFibonacci(int n, long long a = 0, long long b = 1) {
    if (n <= 0) {
        return;
    }
    std::cout << a << (n > 1 ? " " : "");
    printFibonacci(n - 1, b, a + b);
}

int main() {
    int terms;
    std::cout << "Enter the number of terms: ";
    if (!(std::cin >> terms) || terms <= 0) {
        std::cout << "Please enter a valid positive integer." << std::endl;
        return 1;
    }

    std::cout << "Fibonacci Series: ";
    printFibonacci(terms);
    std::cout << std::endl;

    return 0;
}
    