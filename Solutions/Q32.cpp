// C++ program to find the prime numbers between a given interval
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num, num1, num2;

	cout << "Enter first number: ";
	cin >> num1; 

	cout << "Enter second number: ";
	cin >> num2;

	cout << "Prime numbers between "<< num1 << " and " << num2 << " are: ";

	for (int i = num1; i <= num2; i++){
		if (i == 1 || i == 0)
			continue;

		num = 1;

		for (int j = 2; j <= i / 2; ++j){
			if (i % j == 0) {
				num = 0;
				break;
			}
		}
		if (num == 1)
			cout << i << " ";
	}
	return 0;
}