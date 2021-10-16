// Program that solves Question 16 - Finds the GCD of 2 given numbers

#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int num1, int num2);

int main(int argc, char *argv[]) {
    char *input1 = argv[1];
    char *input2 = argv[2];
    int num1 = atoi(input1);
    int num2 = atoi(input2);

    // calculate GCD of num1 and num2
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

} // main

int gcd(int num1, int num2) {
    // everything divides 0
    if (num1 == 0) {
        return num2;
    } // if
    if (num2 == 0) {
        return num1;
    } // if

    // base case
    if (num1 == num2) {
        return num1;
    } // if

    // num1 is greater
    if (num1 > num2) {
        return gcd(num1 - num2, num2);
    } // if
    return gcd(num1, num2 - num1);

} // gcd
