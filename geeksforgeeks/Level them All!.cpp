/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
int Count(Node *root,int L)
{
    //Your code here
    if (!root) return 0;
    if (L == 1) return 1;
    return Count(root->left, L-1) + Count(root->right, L-1);
}