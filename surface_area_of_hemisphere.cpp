// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program calculates the surface area of a hemisphere
//     where the user gets to enter the radius in mm


#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int radius;
    // input
    std::cout << "We will calculate the surface area of a hemisphere. "
    << std::endl;
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius
    // process
    surface area = 3 * 3.14 * radius * radius
    // output
    std::cout << "Surface Area is " << (surface area) << "mm²" << std::endl;
}
