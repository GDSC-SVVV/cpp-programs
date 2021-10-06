/*
C++ Program to Swap Two Numbers without using third variable
*/
#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cout << "Enter value of A = ";
    cin>>A;
    cout<<"Enter value of B = ";
    cin>>B;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
    A = A + B;
    B = A - B;
    A = A - B;
    cout<<"After Swap"<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
    return 0;
}
