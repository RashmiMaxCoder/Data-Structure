
int solve(int n, vector<int> &heights,vector<int> &dp)
{
    if(n==0)
        return 0;
    if(dp[n] !=-1)
        return dp[n];
    int twoJump=1e9;
    int oneJump=solve(n-1,heights,dp)+abs(heights[n-1]-heights[n]);
    if(n>1)
       twoJump=solve(n-2,heights,dp)+abs(heights[n-2]-heights[n]);
    
    return dp[n]=min(oneJump,twoJump);
    
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1,-1);
      return solve(n-1,heights,dp);
    
}
