#include<iostream>
using namespace std;

int Sum_Natural(int num)
{
    if(num != 0)
        return num + Sum_Natural(num - 1);
    return 0;
}
int main() {
    int num;

    cout << "Please, enter a positive integer: ";
    cin >> num;

    cout << "Sum =  " << Sum_Natural(num);  
    
    return 0;
}