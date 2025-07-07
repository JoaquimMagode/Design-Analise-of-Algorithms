

//Write a program to determine whwther numner is prime or not
#include <iostream>

int main() {
    int number, i, flag = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number <= 1) {
        std::cout << number << " is not a prime number.";
        return 0;
    }

    for (i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        std::cout << number << " is a prime number.";
    else
        std::cout << number << " is not a prime number.";

    return 0;
}
