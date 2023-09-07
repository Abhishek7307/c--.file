//Practical 1: Raising a number n to a power p is the same as multiplying n by itself p times.  Write a function called power ( ) that takes a double value for n and an int value for p, and returns the result as double value.  Use a default argument of 2 for p, so that if this argument is omitted, the number will be squared.  Write a main ( ) function that gets values from the user to test this function.
//Abhishek Tripathi
//1/22/FET/BCS/220
#include <iostream>
#include <cmath> // Include the <cmath> header for the pow() function

// Function to calculate the power of a number
double power(double n, int p = 2) {
    return std::pow(n, p);
}

int main() {
    double base;
    int exponent;

    // Get the base number from the user
    std::cout << "Enter the base number: ";
    std::cin >> base;

    // Get the exponent from the user (default is 2)
    std::cout << "Enter the exponent (default is 2): ";
    std::cin >> exponent;

    // Calculate and display the result
    double result = power(base, exponent);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
