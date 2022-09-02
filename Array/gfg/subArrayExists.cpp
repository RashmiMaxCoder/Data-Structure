 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=arr[0];
        
        if(arr[0]==0)
        return true;
        
        unordered_set<int> s;
        s.insert(arr[0]);
        
        for(int i=1;i<n;i++)
        {
            sum +=arr[i];
            
            if(sum==0 || arr[i]==0 || s.find(sum) !=s.end())
                return true;
            s.insert(sum);
        }
        return false;
    }
