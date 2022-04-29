    Node* x = NULL;
    
    void solve(Node *root,Node **head)
    {
        if(!root)
        return;
        
        solve(root->left,head);
        
        if(!(*head))
        *head = root;
        
        root->left = x;
        
        if(x) 
            x->right = root;
            
        x = root;
        
        solve(root->right,head);
    }
    Node *bTreeToCList(Node *root)
    {
        //add code here.
        Node *head = NULL;
        solve(root,&head);
        
        x->right = head;
        head->left = x;
        
        return head;
    }
