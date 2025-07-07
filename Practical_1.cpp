// Online C++ compiler to run C++ program online

//Write a program to determine whwther numner is prime or not
#include <iostream>

int main() {
    int n, i, count=0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << n << " is not a prime number.";
        return 0;
    }

    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2)
        std::cout << n << " is a prime number.";
    else
        std::cout << n << " is not a prime number.";

    return 0;
}
