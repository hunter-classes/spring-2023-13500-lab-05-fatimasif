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
    return (n % d) == 0;    // if n is divisible by d then the remainder will be 0, and this expression evalutes to true
}

/*
TASK B
A prime number is an integer greater or equal to 2 that is only divisible by 1 and by itself.
The first few primes are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 …
N is a prime if and only if it is not divisible evenly by any of the numbers from 2 to N−1.
Let’s implement this decision as a function.
add a function bool isPrime(int n);
The function should return true if n is a prime, otherwise return false. Change the main function to test your new code.
*/

bool isPrime(int n) {
    if (n < 2) {    // checks to see if n is less than 2 (the smallest prime number)
        return false;   // any number less than 2 cannot be prime
    }
        // loop that iterates through all numbers from 2 to n-1
    for (int i = 2; i < n; i++) {   // the loop variable i is initialized to 2 and incremented by 1 on each iteration and continues until i is less than n
        if (isDivisibleBy(n, i)) {  // using the previous function to check if n is dividible by the current value if i
            return false;   // if divisible then n is not a prime number
        }
    }
    return true;    // if it passes the for loop then n is a prime number
}

/*
TASK C
Add a function
int nextPrime(int n);
that returns the smallest prime greater than n.
For example:
nextPrime(14) == 17
nextPrime(17) == 19
Change the main function to test the new code.
*/

int nextPrime(int n) {
    int nextPrimeNum = n + 1;   // initializing variable nextPrimeNum which is the first number greater than n
        // creating a while loop that will run until nextPrimeNum is not prime any longer
    while(!isPrime(nextPrimeNum)) {     // checks whether nextPrimeNum is prime using the isPrime function that was defined before
        nextPrimeNum++;     // if it is not prime then nextPrimeNum is incremented by 1 and the loop runs again
    }
    return nextPrimeNum;
  
}

/*
TASK D
Add a function
int countPrimes(int a, int b);
that returns the number of prime numbers in the interval a ≤ x ≤ b. 
*/

int countPrimes(int a, int b) {
    int count = 0;      // initializing a variable count to keep track of the prime number in the interval
    for (int i = a; i <= b; i++) {      // loop through the integers in the interval a ≤ x ≤ b
        if (isPrime(i)) {       // check whether each integer i is prime by calling the isPrime function defined earlier
            count++;        // increment count variable by 1
        }
    }
    return count;   // return the final value of count which gives the total number of prime numbers in the interval a ≤ x ≤ b

}

/*
TASK E
A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …
Add a function bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. 
*/

bool isTwinPrime(int n) {
    if (!isPrime(n)) {  // if n is not prime, it can't be a twin prime
        return false;
    }
    if (isPrime(n - 2) || isPrime(n + 2)) {  // check whether n-2 or n+2 is prime
        return true;
    }
    return false;
}

/*
TASK F
Add a function
int nextTwinPrime(int n);
that returns the smallest twin prime greater than n.
*/

int nextTwinPrime(int n) {
    int nextTwinPrimeNum = n + 1;
        // entering a loop where the function checks if nextTwinPrimeNum is a twin prime 
        // by calling the isTwinPrime function
    while (true) {
        if (isTwinPrime(nextTwinPrimeNum)) {
            return nextTwinPrimeNum;    // if nextTwinPrimeNum is a twin then it is returned
        }
        nextTwinPrimeNum++;     // otherwise it is incremented and the loop continues
    }
}

/*
TASK G
Add a function
int largestTwinPrime(int a, int b);
that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.
*/

int largestTwinPrime(int a, int b) {
    int largest = -1;   // will store the largest twin prime
        // loop to check the range from a to b to see if it is a twin prime
    for (int i = a; i <= b; i++) {
        if (isTwinPrime(i)) {   // if i is a twin prime it will update largest to i
            largest = i;
        }
    }
    return largest; // returns largest prime number or -1 if there is no prime number
}