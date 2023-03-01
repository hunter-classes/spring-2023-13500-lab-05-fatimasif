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
  std::cout << "Task A" << std::endl;
  bool resultA;
  resultA = isDivisibleBy(125, 5);  // return 1 for true
  std::cout << resultA << std::endl;
  bool resultB;
  resultB = isDivisibleBy(10, 3);   // return 0 for false
  std::cout << resultB << std::endl;

  std::cout << "\n" << std::endl; // space between tasks

    // TASK B
    // testing the bool isPrime function
    std::cout << "Task B" << std::endl;
    bool resultC;
    resultC = isPrime(2);  // returns true
    std::cout << resultC << std::endl;
    bool resultD;
    resultD = isPrime(4);  // returns false
    std::cout << resultD << std::endl;
    bool resultE;
    resultE = isPrime(17);  // returns true
    std::cout << resultE << std::endl;
    bool resultF;
    resultF = isPrime(100);  // returns false
    std::cout << resultF << std::endl;

    std::cout << "\n" << std::endl; // space between tasks

      // TASK C
    std::cout << "Task C" << std::endl;
    int resultG;
    resultG = nextPrime(14);
    std::cout << resultG << std::endl;   // returns 17
    int resultH;
    resultH = nextPrime(17);
    std::cout << resultH << std::endl;  // returns 19

    std::cout << "\n" << std::endl; // space between tasks

      // TASK D
    std::cout << "Task D" << std::endl;
    int resultI = countPrimes(1, 10);
    std::cout << resultI << std::endl;
    int resultJ = countPrimes(50, 100);
    std::cout << resultJ << std::endl;

    std::cout << "\n" << std::endl; // space between tasks

      // TASK E
    std::cout << "Task E" << std::endl;
    int resultK = isTwinPrime(17);
    std::cout << resultK << std::endl;
    int resultL = isTwinPrime(23);
    std::cout << resultL << std::endl;

    std::cout << "\n" << std::endl; // space between tasks

      // TASK F
    std::cout << "Task F" << std::endl;
    int resultM = nextTwinPrime(5);
    std::cout << resultM << std::endl;
    int resultN = nextTwinPrime(17);
    std::cout << resultN << std::endl;

  return 0;
  
}
