#include <iostream>
using namespace std;
int main()
{
    int amount, notes;
    cout << "Enter Amount (Greater than 100) :";
    cin >> amount;
    if (amount >= 100)
    {
        if (amount >= 2000)
        {
            notes = amount / 2000;
            amount = amount - notes * 2000;
            cout << notes << "  Rs.2000 Notes Recived" << endl;
        }
        if (amount >= 1000)
        {
            notes = amount / 1000;
            amount = amount - notes * 1000;
            cout << notes << "  Rs.1000 Notes Recived" << endl;
        }
        if (amount >= 500)
        {
            notes = amount / 500;
            amount = amount - notes * 500;
            cout << notes << "  Rs.500 Notes Recived" << endl;
        }
        if (amount >= 200)
        {
            notes = amount / 200;
            amount = amount - notes * 200;
            cout << notes << "  Rs.200 Notes Recived" << endl;
        }
        if (amount >= 100)
        {
            notes = amount / 100;
            amount = amount - notes * 100;
            cout << notes << "  Rs.100 Notes Recived" << endl;
        }
    }
    else
    {
        cout << "Please enter valid Amount" << endl;
    }

    return 0;
}