/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: main.cpp, lab-05
*/

#include <iostream>
#include "funcs.h"

int main()
{
    // TASK A 
    // testing the bool isDivisibleBy function
  bool resultA;
  resultA = isDivisibleBy(125, 5);  // should return 1 for true
  std::cout << resultA << std::endl;
  bool resultB;
  resultB = isDivisibleBy(10, 3);   // should return 0 for false
  std::cout << resultB << std::endl;

  return 0;
}
