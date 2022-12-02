#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x,y;
};


int main() {
	// your code goes here
	 Point p1[] = {{1,2},{-9,8},{-6,4},{9,8}};
     int n = sizeof(p1)/sizeof(p1[0]);

     sort(p1, p1 + n, [](Point p1,Point p2){
        return p1.x < p2.x;
     });

     for(auto it : p1)
     {
        cout << it.x << " " << it.y << endl ;
     }
     
	return 0;
}
// output:-
//  -9 8
// -6 4
// 1 2
// 9 8
