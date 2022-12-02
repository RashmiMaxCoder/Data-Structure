#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> vec={10,20,5,7};
	sort(vec.begin(),vec.end());
	for(auto e :vec)
	cout<<e<<" ";
	cout<<endl;
	sort(vec.begin(),vec.end(),greater<int>());
	for(int e :vec)
	cout<<e<<" ";
	
	return 0;
}
// output:-
// 5 7 10 20 
// 20 10 7 5 
