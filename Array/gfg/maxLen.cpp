 int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        int max_sum=0;
        int max_len=0;
        
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            max_sum +=A[i];
            
            if(max_sum==0)
            max_len=i+1;
            else
            {
                if(um.find(max_sum) !=um.end())
                max_len=max(max_len,i-um[max_sum]);
                
                else
                um[max_sum]=i;
            }
        }
        return max_len;
    }
