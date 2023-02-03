/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *pre = NULL;
   Node *curr = head;
   while(pos-->=0){
       pre = curr;
       curr = curr->next;
   }
   Node *temp = new Node(data);
   if(pre){
       pre->next = temp;
   }
   temp->prev = pre;
   temp->next = curr;
   if(curr){
       curr->prev=temp;
   }
}