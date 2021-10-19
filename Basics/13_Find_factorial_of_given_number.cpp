#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  int f=1;
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a>0)
  {
    f*=a;
    a--;
  }
  cout<<"Factorial is "<<f;
  return 0;
}
