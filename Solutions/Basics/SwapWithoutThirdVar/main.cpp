/*
C++ Program to Swap Two Numbers without using third variable
*/
#include <iostream>

using namespace std;

void main()
{
    int A,B;
    cout << "Enter value of first Variable ";
    cin>>A;
    cout<<"Enter value of second Variable ";
    cin>>B;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
    A = A + B;
    B = A - B;
    A = A - B;
    cout<<"After Swap"<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
}
