/*
C++ Program to Check Whether Number is Even or Odd
*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter any Integer number to check for odd or even" << endl;
    cin>>number;

    if(number % 2 != 0)
    {
        cout<<"Number is odd = "<<number;
    } else {
        cout<<"Number is even = "<<number;
    }
    return 0;
}
