 
    bool matching(char a, char b)
    {
        return((a=='('&& b==')') ||(a=='{' && b=='}')||(a=='[' && b==']'));
    }
    bool ispar(string x)
    {
        // Your code here
        
        stack<char> s;
        for(int i=0;i<x.lenght();i++)
        {
            if(x[i]=='('|| x[i]=='[' ||x[i]=='{')
            {
                s.push(x[i]);
            }
            else
            {
                if(s.empty()==true)
                    return false;
                else if(matching(s.top,x[i])==false)
                    return false;
                else
                    s.pop();
            }
        }
        return (s.empty()==true);
    }
