#include <iostream>
using namespace std;

//function declaration
int isPrime(int n);

int main()
{
	int num;
	
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if(isPrime(num))
		cout<<num<<" is a prime number"<<endl;
	else
		cout<<num<<" is not a prime number"<<endl;
		
	return 0;
}

//function definition
int isPrime(int n)
{
	int i;
	int prime=1;
	
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}
