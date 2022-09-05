int solve(int i,int target,vector<int> &num,vector<vector<int>> &dp )
{
    if(i==0)
    {
        if(target==0 && num[0]==0)
            return 2;
        if(target==0 || target==num[0])
            return 1;
        return 0;
    }
    if(dp[i][target]!= -1)
        return dp[i][target];
    int nottake=solve(i-1,target,num,dp);
     int take=0;
    if(num[i]<=target)
    take=solve(i-1,target-num[i],num,dp);
    return dp[i][target]=take+nottake;
}

int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return solve(n-1,tar,num,dp);
    
}
