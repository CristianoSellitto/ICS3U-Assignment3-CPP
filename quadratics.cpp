// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if function f is quadratic and calculates the roots

#include <iostream>
#include <cmath>

int aValue;
int bValue;
int cValue;
double rootOne;
double rootTwo;

int main() {
    // Finds if function function f is quadratic and calculates the roots

    std::cout << "f(x) = ax² + bx + c";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the value of a: ";
    std::cin >> aValue;
    std::cout << "Enter the value of b: ";
    std::cin >> bValue;
    std::cout << "Enter the value of c: ";
    std::cin >> cValue;
    std::cout << std::endl;
    if (aValue != 0) {
        std::cout << "This is a quadratic function.";
        rootOne = (-bValue + sqrt(pow(bValue, 2) - 4 * aValue * cValue)) / (
            2 * aValue
        );
        rootTwo = (-bValue - sqrt(pow(bValue, 2) - 4 * aValue * cValue)) / (
            2 * aValue
        );
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Function f's roots are (" << rootOne;
        std::cout << ", 0) and (" << rootTwo << ", 0)";
        std::cout << std::endl;
    } else {
        std::cout << "This is a not a quadratic function.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
