// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program checks if user can have a discount

#include <iostream>
#include <string>

int main() {
    // This function calculates discount

    int number;
    float decimal;
    std::string amountAsString;
    int HST;
    int subtotal;
    int discount;
    int total;

    // Input
    std::cout << "Amount of units: ";
    std::cin >> amountAsString;

    // Process & Output
    try {
        number = std::stoi(amountAsString);
        decimal = std::stof(amountAsString);
        if (number != decimal) {
            std::cout << std::endl;
            std::cout << "Invalid amount of units." << std::endl;
        } else if (number < 0) {
            std::cout << std::endl;
            std::cout << "Invalid amount of units." << std::endl;
        } else if (number > 1000) {
            subtotal = number * 100;
            discount = subtotal * 0.1;
            HST = (subtotal - discount) * 0.13;
            total = subtotal - discount + HST;
            std::cout << std::endl;
            std::cout << "Your total is $" << total << std::endl;
        } else {
            subtotal = number * 100;
            HST = subtotal * 0.13;
            total = subtotal + HST;
            std::cout << std::endl;
            std::cout << "Your total is $" << total << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << std::endl;
        std::cout << amountAsString
        << " is not a valid number of units." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
