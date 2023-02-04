/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node *curr = head;
    if(head==NULL) return NULL;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp = curr->next->next;
            curr->next = temp;
         }
         else{
             curr=curr->next;
         }
    }
    return head;
}