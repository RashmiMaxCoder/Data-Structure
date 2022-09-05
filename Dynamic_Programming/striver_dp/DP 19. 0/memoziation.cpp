 int solve(int w,int wt[],int val[],int i, vector<vector<int>> &dp)
    {
        if(i==0)
        {
            if(wt[0]<=w)
            return val[i];
            return 0;
        }
        if(dp[i][w] != -1)
            return dp[i][w];
         int nottake = 0 +solve(w,wt,val,i-1,dp);
         
         int take=-1e9;
         if(wt[i]<=w)
       
         take=val[i]+solve(w-wt[i],wt,val,i-1,dp);
         
         return dp[i][w]=max(take,nottake);
    }
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
       return solve(W,wt,val,n-1,dp);
    }
