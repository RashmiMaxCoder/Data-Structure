#include<bits/stdc++.h>
int mod=1e9+7;
int solve(int i,int target,vector<int> &arr,vector<vector<int>> &dp)
{
    if(i==0)
        {
            if(target== 0 && arr[0]== 0)
                return 2;
            if(target == 0 ||target == arr[0])
                return 1;

        return 0;
        }
    if(dp[i][target] != -1)
        return dp[i][target];    
   
    int nottake = (solve(i-1,target,arr,dp))%mod;
    int take=0;
    if(arr[i]<=target)
        take=(solve(i-1,target-arr[i],arr,dp))%mod;
    return dp[i][target]=(nottake+take)%mod;
     
}

int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
   
    int sum = accumulate(arr.begin(),arr.end(),0);
    
 
    if(sum - d < 0 || ((sum - d)%2))
        return false;
     vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
    return solve(n-1,(sum - d)/2,arr,dp);
    
}

