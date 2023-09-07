//Write a program in c++ with classname "car" variables are brand, model, year and creat two object "carobj1", "carobj2"
//Abhishek Tripathi
//1/22/FET/BCS/220
#include <iostream>
#include <string>

class Car {
public:
    // Member variables
    std::string brand;
    std::string model;
    int year;
};

int main() {
    // Create two instances of the Car class
    Car carobj1, carobj2;

    // Assign values to the member variables of carobj1
    carobj1.brand = "Toyota";
    carobj1.model = "Camry";
    carobj1.year = 2023;

    // Assign values to the member variables of carobj2
    carobj2.brand = "Ford";
    carobj2.model = "Mustang";
    carobj2.year = 2022;

    // Display information for carobj1
    std::cout << "Car 1 Information:" << std::endl;
    std::cout << "Brand: " << carobj1.brand << std::endl;
    std::cout << "Model: " << carobj1.model << std::endl;
    std::cout << "Year: " << carobj1.year << std::endl;

    // Display information for carobj2
    std::cout << "\nCar 2 Information:" << std::endl;
    std::cout << "Brand: " << carobj2.brand << std::endl;
    std::cout << "Model: " << carobj2.model << std::endl;
    std::cout << "Year: " << carobj2.year << std::endl;

    return 0;
}
