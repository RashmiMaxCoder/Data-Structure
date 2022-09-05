
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n+1,vector<int>(k+1,false));
    
    for(int i=0;i<n;i++)
    {
        dp[i][0]=true;
    }
    if(arr[0]<=k)
        dp[0][arr[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int target=1;target<=k;target++)
        {
             bool notpick=dp[i-1][target];  
            bool pick=false;
            if(arr[i]<=target)    
             pick=dp[i-1][target-arr[i]];
             dp[i][target]=pick||notpick;
        }
    }
    return dp[n-1][k];
}
