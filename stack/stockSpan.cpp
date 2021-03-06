vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       
      vector<int> vec;
      stack<int>s;
      vec.push_back(1);
      s.push(0);
      for(int i=1;i<n;i++)
      {
          while(!s.empty()&& price[s.top()]<=price[i])
          s.pop();
          
          int span=s.empty()?i+1:i-s.top();
          
          vec.push_back(span);
          s.push(i);
          
      }
      return vec;
    }
