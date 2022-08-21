	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n=nums.size();
	    vector<pair<int,int>>vec(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        vec[i]={nums[i],i};
	    }
	    sort(vec.begin(),vec.end());
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(vec[i].second== i)
	        continue;
	        else
	        {
	            c++;
	            swap(vec[i],vec[vec[i].second]);
	            i--;
	        }
	    }
	    return c;
	}
