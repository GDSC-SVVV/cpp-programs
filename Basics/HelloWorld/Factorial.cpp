//C++ Program to Find Factorial
#include <iostream>
using namespace std;

int main(void)
{
    int i, fact = 1;
    cout<<"Enter the number: ";
    cin>>i;
    
    if(i < 0)
    {
        cout<<"Please enter only positive values! ";
    }
    else
    {
        for(int n = 1;n <= i; n++)
        {
           fact = fact*n;
        }
      cout<<"Factorial of "<<i<<" is: "<<fact<<"\n"<<endl;
    }
  
   return 0;
}    
