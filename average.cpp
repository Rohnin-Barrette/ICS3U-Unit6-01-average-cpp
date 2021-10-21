// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// this program rounds a float to the users inputted number

#include <iostream>
#include <random>

int main() {
    // This function generates 10
    // random numbers and finds the average between them

    float average;
    int number_list[10];
    int total = 0;
    int loop_counter;
    int random_number;

    // input
    for (loop_counter = 0; loop_counter <= 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [1,10]
        random_number = idist(rgen);
        total = (total + random_number);
        number_list[10] << (random_number);
        std::cout << "The random number is: " << random_number << std::endl;
    }
    average =
        (static_cast<float>(total) / (static_cast<float>(loop_counter) + 1));
    std::cout << "\nThe avearge is " << average << std::endl;
    std::cout << "\nDone." << std::endl;
}
