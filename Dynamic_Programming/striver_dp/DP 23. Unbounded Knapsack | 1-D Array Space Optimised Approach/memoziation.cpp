 int solve(int i,int w,int val[],int wt[], vector<vector<int>> &dp)
    {
        if(i==0)
        return (w/wt[i])*val[i];
        
        if(dp[i][w] != -1)
        return dp[i][w];
        
        int nottake= 0+ solve(i-1,w,val,wt,dp);
        int take=-1e9;
        if(wt[i]<=w)
        take=val[i]+solve(i,w-wt[i],val,wt,dp);
        
        return dp[i][w]=max(nottake,take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        return solve(N-1,W,val,wt,dp);
    }
