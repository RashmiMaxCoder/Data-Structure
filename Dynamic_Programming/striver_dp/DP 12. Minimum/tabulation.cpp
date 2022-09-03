int solve(int n,int m,vector<vector<int>> &matrix,vector<vector<int>>&dp)
{
    for(int j=0;j<m;j++)//col
    {
        dp[0][j]=matrix[0][j];
    }
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
            int up=matrix[i][j]+dp[i-1][j];
           int leftD=matrix[i][j];
           if(j-1>=0)
             leftD +=dp[i-1][j-1];
           else
               leftD +=-1e9;
           int rightD=matrix[i][j];
           if(j+1<m)
             rightD +=dp[i-1][j+1];
           else
               rightD +=-1e9;
            dp[i][j]=max(up,max(leftD,rightD));
       }
   }
    int maxi=-1e9;
    for(int j=0;j<m;j++)
    {
        maxi=max(maxi,dp[n-1][j]);
    }
    return maxi;
   
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
     int n=matrix.size();
     int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return solve(n,m,matrix,dp);
}
