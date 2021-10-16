#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float discriminant, root1, root2, a, b, c, real, imaginary;
	cout << "Enter coefficients a, b and c: ";
	//user input
	cin>>a>>b>>c;
	//finding discriminant
	discriminant = (b*b) - (4*a*c);
	//for real and different roots
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		cout << "Roots are real and different." << endl;
		cout << "root1 = " << root1 << endl;
		cout << "root2 = " << root2 << endl;
	}
	//for imaginary roots
	else if (discriminant<0) 
	{
		real = -b/(2*a);
		imaginary =sqrt(-discriminant)/(2*a);
		cout << "Roots are complex and different."  << endl;
		cout << "root1 = " << real << "+" << imaginary << "i" << endl;
		cout << "root2 = " << real << "-" << imaginary << "i" << endl;
	}
	//for real and equal roots
	else 
	{
		cout << "Roots are real and same." << endl;
		root1 = (-b + sqrt(discriminant)) / (2*a);
		cout << "root1 = root2 =" << root1 << endl;
	}
	return 0;
}