class Solution
{
    public:
    //Function to find total number of unique paths.
    int solve(int m,int n,vector<vector<int>> &dp)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                  if(i==0 && j==0)
                  {
                     dp[i][j]=1;
                    continue;
                  }
                  
        int left=0;
        int up=0;
        if(i>0)
        up=dp[i-1][j];
        if(j>0)
        left=dp[i][j-1];
        
         dp[i][j]=left+up;
            }
        }
        return dp[m-1][n-1];
       
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>> dp(a,vector<int>(b,-1));
        return solve(a,b,dp);
    }
};
