#include <iostream>

using namespace std;

int main()
{
    cout<<"enter date in format ddmmyyyy";
    
    int arr[10];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    
    int start=0,end=8-1;
    while(start<end){
        arr[start]=arr[start]+arr[end];
        arr[end]=arr[start]-arr[end];
        arr[start]=arr[start]-arr[end];
        start++;
        end--;
        
    }
     for(int j=0;j<8;j++){
         cout<<arr[j];
     }

    return 0;
}
