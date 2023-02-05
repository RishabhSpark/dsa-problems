/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *curr=head;
       Node *next;
       Node *rev;
       int count=0;
       if(head==NULL) return NULL;
       while(curr!=NULL){
           count++;
           next = curr->next;
           curr->next = rev;
           rev = curr;
           curr = next;
       }
       if(n>count) return -1;
       while(n-->1){
           rev = rev->next;
       }
       return rev->data;
}


// WITHOUT REVERSING THE LINKED LIST
// int getNthFromLast(Node *head, int n)
// {
//        // Your code here
//        Node *curr=head;
//        int count=0;
//        if(head==NULL) return 0;
//        while(curr!=NULL){
//            count++;
//            curr = curr->next;
//        }
//        if(n>count) return -1;
//        Node *curr1 = head;
//        for(int i=1; i<count-n+1; i++){
//            curr1 = curr1->next;
//        }
//        return curr1->data;
// }