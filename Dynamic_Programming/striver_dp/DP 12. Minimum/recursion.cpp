int solve(int i,int j,int m,vector<vector<int>> &matrix)
{
  if(j<0 || j>= m)
      return -1e9;
    if(i==0)
        return matrix[0][j];
    int up=matrix[i][j]+solve(i-1,j,m,matrix);
    int leftD=matrix[i][j]+solve(i-1,j-1,m,matrix);
    int rightD=matrix[i][j]+solve(i-1,j+1,m,matrix);
    return max(up,max(leftD,rightD));
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
     int n=matrix.size();
     int m=matrix[0].size();
    int maxi=-1e9;
    for(int j=0;j<m;j++)
    {
       maxi=max(solve(n-1,j,m,matrix),maxi); //i ,j for travel and m as size
    }
    return maxi;
}
