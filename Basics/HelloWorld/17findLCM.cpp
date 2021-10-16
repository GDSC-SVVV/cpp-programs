 
#include <iostream>
using namespace std;
 
int main() 
{
    long n1, n2, n3;
    long max;
    long i;
 
    cout << "Please, enter first number: ";
    cin >> n1;

    cout << "Please, enter second number: ";
    cin >> n2;

    cout << "Please, enter third number: ";
    cin >> n3;

    max = n1;
 
    if ( n2 > max )
        max = n2;
 
    if ( n3 > max )
        max = n3;
 
    i = max;
    while ((i % n1 != 0) || (i % n2 != 0) || (i % n3 != 0))
        i++;
 
    cout << "Least Common Multiple between " << n1 << ", " << n2 << " and " << n3 << " is: " << i << endl;
 
    return 0;
}
