/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: tests.cpp, lab-05
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

    // TASK A
TEST_CASE("isDivisibleBy Cases") {
  CHECK(isDivisibleBy(125, 5) == 1);
  CHECK(isDivisibleBy(10, 3) == 0);
}

    // TASK B
TEST_CASE("isPrime Cases") {
  CHECK(isPrime(2) == 1);
  CHECK(isPrime(4) == 0);
  CHECK(isPrime(17) == 1);
  CHECK(isPrime(100) == 0);
}

    // TASK C
TEST_CASE("nextPrime Cases") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
}

    // TASK D
TEST_CASE("countPrimes Cases") {
  CHECK(countPrimes(1, 10) == 4);
  CHECK(countPrimes(50, 100) == 10);
}

  // TASK E
TEST_CASE("isTwinPrime Cases") {
  CHECK(isTwinPrime(17) == 1);
  CHECK(isTwinPrime(23) == 0);
}

  // TASK F
TEST_CASE("nextTwinPrime Cases") {
  CHECK(nextTwinPrime(5) == 7);
  CHECK(nextTwinPrime(17) == 19);
}