#include<bits/stdc++.h> 
using namespace std; 
   
// floor of square root of n 
int floorSqrt(int n) 
{ 
    // Base cases 
    if (n == 0 || n == 1) 
    return n; 
    
    int i = 1, result = 1; 
    while (result <= n) 
    { 
      i++; 
      result = i * i; 
    } 
    return i - 1; 
} 
   
// Driver program 
int main() 
{ 
    int n = 16; 
    cout << floorSqrt(n) << endl; 
    return 0; 
}
