 bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        if(n & (1<<(k)))
        return 1;
        else
        return 0;
        
        
    }
