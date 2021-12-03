// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// Adding Loop

#include <iostream>

int main() {
    // function for adding while loop
    
    // define variables
    int number;
    int counter = 0;
    int sum_num = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // process
    while (counter < number) {
        counter++;
        sum_num += counter;
    }

    // output
    std::cout << "The sum of all positive numbers from 1 to " << number;
    std::cout << " is " << sum_num << std::endl;

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}