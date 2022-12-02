

vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int first=-1,last=-1;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
            l=mid+1;
        else if(arr[mid]>x)
            h=mid-1;
         else
         {
             if(mid==0 || arr[mid]!=arr[mid-1]){
                 first=mid;
                 break;
             }
             else
             h=mid-1;
         }
    }
    
    l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
            l=mid+1;
        else if(arr[mid]>x)
            h=mid-1;
        else{
            if(mid==n-1 ||arr[mid]!=arr[mid+1]) {
                last=mid;
                break;
            }
            else
            l=mid+1;
        }
    }
    return {first,last};
}

--------------------------
 vector<int> find(int arr[], int n , int x )
{
    // code here
    int l,count=0;
    vector<int> first;
    for(int i=0;i<n;i++){   //get right element
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
------------------------
    vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int s=0,e=n-1,mid;
        mid=s+(e-s)/2;
      
        while(s<=e){
            if(arr[mid]==x){
                ans.push_back(mid);
                e=mid-1;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        s=0;
        e=n-1;
        while(s<=e){
            if(arr[mid]==x){
                ans.push_back(mid);
                s=mid+1;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(ans.size()==0){
            return {-1,-1};
        }
        sort(ans.begin(),ans.end());
        return {ans[0],ans[ans.size()-1]};
}
