// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program allows the user to enter a
// whole number.It then uses a do..while
// loop to calculate the factorial of that number.
#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
    // initialize the loop counter and sum
    int loopCounter = 0;
    int factAns = 1;
    int userNum;
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumString;
    std::cout << "\n";

    // try catch
    try {
        // set userNum string into an integer
        userNum = stoi(userNumString);
        if (userNum % 1 != 0) {
            // if statement for if user_num is a negative
            if (userNum > 0) {
                // calculate the sum of all numbers from 0 to user number
                do {
                    loopCounter = loopCounter + 1;
                    factAns = factAns * loopCounter;
                    std::cout << "Tracking " << loopCounter
                              << " time(s) through loop." << std::endl;
                    if (loopCounter >= userNum) {
                        break;
                    }
                } while (loopCounter < userNum);

                // display the factorial of the user input
                std::cout << userNum << "! = " << factAns
                          << "\n"
                          << std::endl;

            } else if (userNum == 0) {
                // if userNum is 0
                std::cout << "0! = 1"
                          << "\n"
                          << std::endl;
            } else if (userNum < 0) {
                // if userNum is negative
                std::cout << userNumString
                          << " is not a positive integer."
                          << "\n"
                          << std::endl;
            }
        } else {
            std::cout << userNumString << " is not an integer."
                      << "\n"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        // exception for strings and floats
        std::cout << userNumString << " is not a positive integer."
                  << "\n" << std::endl;
    }
    // display ending message
    std::cout << "Thanks for playing!";
}
