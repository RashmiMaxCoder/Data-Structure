bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    if(sum % 2 )
       return false;
     int target=sum/2;
      vector<vector<int>> dp(n+1,vector<int>(target+1,false));
      for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
    if(arr[0]<=target)
        dp[0][arr[0]]=true;
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<=target;j++)
        {
             bool notpick=dp[i-1][j];  
              
            bool pick=false;
             if(arr[i]<=j)    
                 pick=dp[i-1][j-arr[i]];
             dp[i][j]=pick||notpick;
        }
    }
   return dp[n-1][target]; 
}
