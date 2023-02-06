/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to swap elements pairwise.
struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node *curr = head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data, curr->next->data);
        curr=curr->next->next;
    }
    return head;
}