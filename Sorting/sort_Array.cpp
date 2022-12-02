#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[]={10,20,5,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	sort(arr,arr+n);
	cout<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	sort(arr,arr+n,greater<int>());
	cout<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
// output:-
//  10 20 5 7 
// 5 7 10 20 
// 20 10 7 5 
