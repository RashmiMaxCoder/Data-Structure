class Solution {
public:  
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
       
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
     
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
               if(i>=0 && j>=0 && mat[i][j]== 1)
               {
                   dp[i][j]=0;
                   continue;
               }
             
             if(i==0 && j==0)
              {
               dp[i][j]= 1;
               continue;
              }   
        int up=0;
        int left=0;
         if(i>0)
            up=dp[i-1][j];
         if(j>0)
             left=dp[i][j-1];
          dp[i][j]=up+left;  
            }
        }
        return dp[row-1][col-1];
    }
};
