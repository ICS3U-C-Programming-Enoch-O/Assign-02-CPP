// Copyright (c) 2021 Enoch O All rights reserved.
// Created by: Enoch O
// Date: Feb 27, 2025
// his program asks the user for the length, Height and radius
// of the Oblique cylinder
// It then Calculates and Displays the Volume and Surface area using tau.
#include <iostream>
#include <cmath>
int main() {
    // Set variables
    double length, height, radius, volume, surfaceArea;
    const double PI = 3.1415926;


    // Get dimensions from user


    std::cout << "What is the length(slant height) of the oblique cylinder? ";
    std::cin >> length;
    std::cout << "What is the height of your oblique cylinder? ";
    std::cin >> height;
    std::cout << "What is the radius of your oblique cylinder? ";
    std::cin >> radius;

    // Calculate volume
    volume = PI * pow(radius, 2) * height;

    // Calculate surface area
    surfaceArea = 2 * PI * radius * (length + radius);

    // Display results
    std::cout << "The volume of the oblique cylinder is: " << volume
    << "cubic units" << std::endl;
    std::cout << "The surface area of the oblique cylinder is: "
    << surfaceArea << "square units" << std:: endl;

    return 0;
}

