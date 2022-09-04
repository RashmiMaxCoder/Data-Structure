bool solve(int i,int target,vector<int> &arr, vector<vector<int>>&dp)
{
    if(target== 0)
       return true;
    if(i==0)
        return arr[0]==target;
    if(dp[i][target] != -1)
        return dp[i][target];
    bool notpick=solve(i-1,target,arr,dp);  
    
    bool pick=false;
    if(arr[i]<=target)    
         pick=solve(i-1,target-arr[i],arr,dp);
    
    return dp[i][target]=pick||notpick;
}
bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
  
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    if(sum % 2)
        return false;
    int target=sum/2;
     vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
   return solve(n-1,target,arr,dp); 
}
