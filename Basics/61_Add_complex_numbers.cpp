#include <iostream>
using namespace std;

struct comp
{
    int x;
    int y;
};

comp add(comp c1, comp c2)
{
    comp c;
    c.x = c1.x + c2.x;
    c.y = c1.y + c2.y;

    return c;
}

int main()
{
    int r, i, n;
    comp c1, c2, c;

    cout << "Enter the first number" << endl;
    cout << "Real part: ";
    cin >> c1.x;
    cout << "Imaginary part: ";
    cin >> c1.y;

    cout << "Enter the second number" << endl;
    cout << "Real part: ";
    cin >> c2.x;
    cout << "Imaginary part: ";
    cin >> c2.y;

    c = add(c1, c2);

    cout << "Sum of the numbers is: " << c.x << " + " << c.y << "i";
    return 0;
}