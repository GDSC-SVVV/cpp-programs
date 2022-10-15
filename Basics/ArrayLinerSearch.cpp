#include<iostream>
using namespace std;
bool Search(int arr[],int size ,int key){
           for (int i = 0; i < size; i++)
           {
             if (arr[i]==key)
             {
                return 1;
             }
             
           }
        return 0 ;   
}
int main()
{
     
    int key;
    int arr[10] = {10,23,14,12,65,1,9,45,234,54} ;
    // wheather 1 is present in it or note 
    cout<<"Enter the element to search in the array : "<<endl;
    cin>>key;
    bool found = Search(arr,10,key);
    if(found){
        cout<<"Key is persent  "<<endl;
    }
    else{
        cout<<"key is not found "<<endl;
    }
}
