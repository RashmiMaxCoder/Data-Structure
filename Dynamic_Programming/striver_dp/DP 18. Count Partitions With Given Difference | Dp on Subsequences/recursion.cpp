#include<bits/stdc++.h>
int solve(int i,int target,vector<int> &arr)
{
    if(i==0)
        {
            if(target== 0 && arr[0]== 0)
                return 2;
            if(target == 0 ||target == arr[0])
                return 1;

        return 0;
        }
    int nottake = solve(i-1,target,arr);
    int take=0;
    if(arr[i]<=target)
        take=solve(i-1,target-arr[i],arr);
    
    return nottake+take;
}

int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int sum = accumulate(arr.begin(),arr.end(),0);
    
    if(sum - d < 0 || ((sum - d)%2))
        return false;
    
    return solve(n-1,(sum - d)/2,arr);
}

