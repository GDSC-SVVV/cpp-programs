#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>ar(n);
	for(int i =0;i<n;i++)cin>>ar[i];
	sort(ar.begin(),ar.end());
	cout<<"Enter the element to be seached"<<endl;
	int x;
	cin>>x;
	int low = 0;
	int high = n-1;
	bool temp = false;
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		if(ar[mid] == x){
			cout<<"The element is found"<<endl;
			temp = true;
			break;
		}
		else if(ar[mid]>x){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	if(temp == false)cout<<"Element not found"<<endl;
}
