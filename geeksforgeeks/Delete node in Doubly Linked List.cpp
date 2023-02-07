/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
        //Your code here
        if(x==1) return head->next;
        if (head == NULL) return NULL;
        Node *curr = head;
        for(int i=1; i<x; i++){
            curr=curr->next;
        }
        if(curr->next==NULL){
            curr->prev->next=NULL;
            return head;
        }
        else{
            curr->prev->next=curr->next;
            return head;
        }
    }
};