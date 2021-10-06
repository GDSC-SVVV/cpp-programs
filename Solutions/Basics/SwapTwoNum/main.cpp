/*
C++ Program to Swap Two Numbers
*/

#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout << "Enter value of A = ";
    cin>>A;
    cout<<"Enter value of B = ";
    cin>>B;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
    C = A;
    A = B;
    B = C;
    cout<<"After Swap"<<endl;
    cout<<"A = "<<A<<endl<<"B = "<<B<<endl;
    return 0;
}
