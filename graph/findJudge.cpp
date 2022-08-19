int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n==1)
            return 1;
        
        unordered_map<int,int> um;
        for(auto a : trust)
        {
            um[a[0]]--;
            um[a[1]]++;
        }
        for(auto e: um)
        {
            if(e.second==(n-1))
                return e.first;
        }
        return -1;
        
    }
