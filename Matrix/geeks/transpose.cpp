  void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        int arr[n][n];
        
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = matrix[j][i];
            }
        }
        
        for(int i = 0; i < n; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                matrix[i][j] = arr[i][j];
            }
        }
    }
