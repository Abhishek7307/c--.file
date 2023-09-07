// Write a program in C++, ask a temperature for user and print in celsius.
// Abhishek Tripathi
// 1/22/FET/BCS/220
#include <iostream>

int main() {
    double fahrenheit, celsius;

    // Ask user for input
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    // Display the result
    std::cout << "Temperature in Celsius: " << celsius << std::endl;

    return 0;
}
