/*
C++ Program to Find Quotient and Remainder
*/

#include <iostream>

using namespace std;

int main()
{
    float Quotient = 0;
    int Remainder = 0;
    int dividend , divisor;
    cout << "Enter the number to divide = ";
    cin>>dividend;
    cout<<"Enter the number to divide the dividend = ";
    cin>>divisor;
    Quotient = dividend / divisor;
    Remainder = dividend % divisor;
    cout<< "Quotient is = "<<Quotient<<endl;
    cout<<"Remainder is = "<<Remainder<<endl;
    return 0;
}
