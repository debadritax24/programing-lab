//! write a c/c++ program to print fibonacci series using recursion//

#include <iostream>
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    std::cout << "Enter the number of terms: ";
    if (!(std::cin >> terms) || terms <= 0) {
        std::cout << "Please enter a valid positive integer." << std::endl;
        return 1;
    }

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacci(i) << (i == terms - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}
