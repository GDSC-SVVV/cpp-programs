#include <iostream>
using namespace std;

int main()
{
    //Asking the user the number of terms he wants.
    int terms;
    cout << "Please enter how many terms you want: ";
    cin >> terms;

    //Declaring the variables n1 = first number, n2 = second number, n3 = sum of n1 + n2, i = variable for the loop.
    int n1 = 0;
    int n2 = 1;
    int n3;
    int i;

    //Loop to print the first two numbers and then calculating the sum of the previous two with n3 variable.
    for (i = 1; i <= terms; ++i) {
        if (i == 1) {
            cout << n1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << n2 << ", ";
            continue;
        }

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        cout << n3 << ", ";
    }
    return 0;
}