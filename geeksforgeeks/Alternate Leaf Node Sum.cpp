/*

struct Node{
  
  int data;
  Node *left;
  Node *right;
  
};
*/
int leafSumAlternate(Node *head)
{
    Node* root=head;
     if (!root) {
        return 0;
     }
    int sum = 0;
    bool leaf = true; 
    stack<Node*> stk;
    stk.push(root);
    while (!stk.empty()) {
        auto node = stk.top();
        stk.pop();

        if (!node->left && !node->right) {
            if (leaf) {
                sum += node->data;
            }
            leaf = !leaf;
        }

        if (node->right) {
            stk.push(node->right);
        }
        if (node->left) {
            stk.push(node->left);
        }
    }

    return sum;
}