// J. Madeira - March 2022

#include <iostream>
#include <string>

template <typename T>
T Largest(T a, T b) {
    std::cout << "(arguments of the same type) ";

    if (a > b) {
        return a;
    } else {
        return b;
    }
}

template <typename aType, typename bType>
auto Largest(aType a, bType b) {
    std::cout << "(arguments of different types) ";

    return a > b ? a : b;
}

int main(void) {
    int int_1 = 10;
    int int_2 = 20;
    double double_1 = 10.5;
    double double_2 = 10.4;
    std::string string_1 = "DEF";
    std::string string_2 = "ABC";

    std::cout << "Largest between " << int_1 << " and " << int_2 << " is "
              << Largest(int_1, int_2) << std::endl;

    std::cout << "Largest between " << double_1 << " and " << double_2 << " is "
              << Largest(double_1, double_2) << std::endl;

    std::cout << "Largest between " << string_1 << " and " << string_2 << " is "
              << Largest(string_1, string_2) << std::endl;

    std::cout << "Largest between " << int_1 << " and " << double_1 << " is "
              << Largest(int_1, double_1) << std::endl;

    std::cout << "Largest between " << double_2 << " and " << int_2 << " is "
              << Largest(double_2, int_2) << std::endl;
    return 0;
}