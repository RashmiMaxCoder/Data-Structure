
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N+1,vector<int>(W+1,0));
        for(int i=wt[0];i<=W;i++)
        {
            dp[0][i]= (int)(i/wt[0])*val[0];
        }
       for(int i=1;i<N;i++)
       {
           for(int j=0;j<=W;j++)
           {
                int nottake= 0+dp[i-1][j];
                int take=-1e9;
                if(wt[i]<=j)
                take=val[i]+dp[i][j-wt[i]];
                dp[i][j]=max(nottake,take); 
           }
       }
        
        return dp[N-1][W];
    }
