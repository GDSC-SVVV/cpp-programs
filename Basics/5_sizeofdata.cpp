//C++ Program to Find Size of int, float, double and char in Your System
#include<iostream>
using namespace std;

int main()
{
	cout << "Size of int : " << sizeof(int)
	<< " bytes" << endl;

    cout << "Size of float : " << sizeof(float)
	<< " bytes" <<endl;

    cout << "Size of double : " << sizeof(double)
	<< " bytes" << endl;

	cout << "Size of char : " << sizeof(char)
	<< " byte" << endl;

	return 0;
}
