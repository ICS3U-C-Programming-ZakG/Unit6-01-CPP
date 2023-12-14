// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Dec. 13, 2023
// This program generates 10 random numbers
// then finds the average and uses lists.

#include <cstdlib>
#include <iostream>

int main() {
    // introduce program to user
    std::cout << "Hello, this program generates 10 random ";
    std::cout << "numbers then finds the average." << std::endl;

    // declare constants and variables
    const int SIZE = 10;
    const int MAX = 100;
    int averageList[SIZE];
    int sum = 0;
    float average;
    int randomNumber;

    // populate array
    for (int counter = 0; counter < SIZE; counter ++) {

        // Providing a seed value
        srand((unsigned)time(NULL));

        // Generate random number
        randomNumber = rand() % MAX;

        // assign random number to cell in array
        averageList[counter] = randomNumber;
    }
    // calculate sum
    for (int counterTwo = 0; counterTwo < SIZE; counterTwo ++) {
        sum = sum + averageList[counterTwo];
    }

    // calculate average
    average = sum / SIZE;

    // display average
    std::cout << "The average is " << average << std::endl;
    }
