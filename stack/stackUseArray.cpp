void MyStack :: push(int x)
{
    // Your Code
    arr[++top] = x;
}
 
//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code   
    if(top<0) return -1;
    return arr[top--];
 
}
