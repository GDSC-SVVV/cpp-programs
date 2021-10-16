#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Please, enter dividend: ";
    cin >> dividend;

    cout << "Please, enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient is " << quotient << endl;
    cout << "The remainder is " << remainder;

    return 0;
}
