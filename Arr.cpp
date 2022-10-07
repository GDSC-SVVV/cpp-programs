#include<iostream>
using namespace std;
// void printarr(int arr[],int size){

//  for (int i=0;i<=size;i++){
//      cout<<arr[i] << " " << endl;
//  }

// }
void revar(int arr[],int size){

 for(int i=size;i=0;i--){
     cout<<arr[i] <<" "<< endl;
 }

}

int main(){

int arrfive[50]={1,2,3,4,5,6};

// printarr(arrfive,5);
revar(arrfive,5);

}
