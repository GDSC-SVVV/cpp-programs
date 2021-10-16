#include<iostream>
using namespace std;

void swap(int *x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int num1 = 5, num2 = 6;
  cout<<"Before swap the numbers are "<<num1<<" "<<num2<<endl;
  swap(&num1, &num2);
  cout<<"After swap the numbers are "<<num1<<" "<<num2<<endl;
}