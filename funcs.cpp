/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: funcs.cpp, lab-05
*/

#include <iostream>
#include "funcs.h"

// add functions here

/*
TASK A
Write a program numbers.cpp that defines a function
bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
*/

bool isDivisibleBy(int n, int d) {
    return (n % d) == 0;
}