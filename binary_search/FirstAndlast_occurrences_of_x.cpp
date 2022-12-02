vector<int> find(int arr[], int n , int x )
{
    // code here
    int l,count=0;
    vector<int> first;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            
            l=i;
            count++;
            
        }
    }
    if(count==0){
    first.push_back(-1);
    first.push_back(-1);
    return first;    
    }
    else{
    int f=l-count+1;
    first.push_back(f);
    first.push_back(l);
    return first;
    }
    
}
