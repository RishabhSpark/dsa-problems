
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    while(head1!=NULL && head2!=NULL){
        int ele1 = head1->data;
        int ele2 = head2->data;
        head1 = head1->next;
        head2 = head2->next;
        if(head1==NULL && head2!=NULL) return false;
        if(head2!=NULL && head2==NULL) return false;
        if(ele1!=ele2) return false;
    }
    return true;
}