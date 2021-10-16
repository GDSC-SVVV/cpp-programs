// Program that solves Question 7 - Checks whether number is even or odd

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    char *input = argv[1];
    int num = atoi(input);

    bool isEven = false;

    if (num % 2 == 0) {
        isEven = true;
    } // if

    if (isEven) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    } // if


} // main
