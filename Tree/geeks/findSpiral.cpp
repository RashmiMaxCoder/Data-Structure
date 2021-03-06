vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>vec;
    if(root==NULL)
    return vec;
    
    stack<Node*> s1,s2;
    s1.push(root);
    
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
           Node* curr=s1.top();
           s1.pop();
           vec.push_back(curr->data);
           if(curr->right!=NULL)
           s2.push(curr->right);
           if(curr->left!=NULL)
           s2.push(curr->left);
           
        }
        while(!s2.empty())
        {
           Node* curr=s2.top();
           s2.pop();
           vec.push_back(curr->data);
           if(curr->left!=NULL)
           s1.push(curr->left);
           if(curr->right!=NULL)
           s1.push(curr->right);
        }
    }
    return vec;
}
