int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1,-1);
    dp[0]=0;
    
    for(int i=1;i<n;i++)
    {
      int twoJump=1e9;
    int oneJump=dp[i-1]+abs(heights[i-1]-heights[i]);
    if(i>1)
       twoJump=dp[i-2]+abs(heights[i-2]-heights[i]);
    
   dp[i]=min(oneJump,twoJump);
    }
    return dp[n-1];
}
