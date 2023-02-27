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