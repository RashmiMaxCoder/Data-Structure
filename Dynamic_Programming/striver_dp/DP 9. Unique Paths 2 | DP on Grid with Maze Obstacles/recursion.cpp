class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>& mat)
    {
        //base
         if(i>=0 && j>=0 && mat[i][j]==1)
            return 0;
     
        if(i<0 ||j<0)
            return 0;
        
        //dest to source
        if(i==0 && j==0)
            return 1;
       
        
        //body
        int up=solve(i-1,j,mat);
        int left=solve(i,j-1,mat);
        
        //return
        return up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
          return solve(row-1,col-1,mat);
    }
};
