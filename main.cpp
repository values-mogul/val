// main.cpp
#include <iostream>
#include "even_odd.h"

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
