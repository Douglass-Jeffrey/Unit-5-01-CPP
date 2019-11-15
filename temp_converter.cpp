// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This is program prints translates a celsius number to fahrenheit

#include <iostream>
#include <string>

void temperature() {
    // This calculates celsius to Fahrenheit

    // variables
    std::string celsius;
    float fahrenheit = 0;

    // input
    std::cout << "Input a Celsius temperature of your choice: " << std::endl;
    std::cin >> celsius;

    try {
        // turns variable into float
        float celsiusFloat = std::stof(celsius);

        // process
        fahrenheit = (celsiusFloat * 1.8) + 32;

        // output
        std::cout << "The Celsius temperature " << celsius << "°" << " is "
                  << fahrenheit << "° in Fahrenheit" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Please input a proper Celsius temperature";
    }
}


main() {
    // This runs functions
    temperature();
}
