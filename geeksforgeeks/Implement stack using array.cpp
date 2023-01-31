//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    int size = sizeof(arr)/sizeof(arr[0]);
    if(top>=size) return;
    top=top+1;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
    if(top<0) return -1;
    int num = arr[top];
    top = top-1;
    return num;
}