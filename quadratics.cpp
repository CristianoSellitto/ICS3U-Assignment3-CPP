// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if function f is quadratic or linear

#include <iostream>

int aValue;
int bValue;
int cValue;

int main() {
    // Finds if function f is quadratic or linear and
    // prints basic info about function f

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
    if (aValue == 0) {
        std::cout << "This is a linear function.";
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "The slope of function f is " << bValue;
        std::cout << std::endl;
    } else {
        std::cout << "This is a quadratic function.";
        std::cout << std::endl;
        std::cout << "The vertical stretch of function f is " << aValue;
        std::cout << std::endl;
    }
    std::cout << "The y-intercept of function f is (0, " << cValue << ")";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
