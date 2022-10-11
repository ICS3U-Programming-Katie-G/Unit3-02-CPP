// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 10th, 2022
// This program gets the user's guess, then checks
// to see if it is equal to the correct number set
// as a constant, then displays the result to the user.
#include <iomanip>
#include <iostream>

// this function gets the user's guess, and then
// checks to see if it is correct, then checks
// to see if it is correct.
int main() {
    // declaring the constant of the correct guess.
    const int CORRECT_NUM = 7;

    // initializing the variable for the user's guess.
    float userGuess;

    // getting the user's guess.
    std::cout << "Guess my favorite number from 0 - 9 :)";
    std::cout << "I bet you won't get it :) ";
    std::cin >> userGuess;

    // checking to see if user's guess is the right num.
    if (userGuess == CORRECT_NUM) {
        // display this code if user_guess is right num.
        std::cout << "You got it right :) Good job :)\n";
    }

    // checking to see if user's guess is not the right num.
    if (userGuess != CORRECT_NUM) {
        // display this code if user_guess is not right num.
        std::cout << "You did not get it right :( I am sad now :(\n";
    }
}
