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

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node *temp = new Node(x);
	Node *curr = head;
	int len=0;
	while(curr!=NULL){
	    len++;
	    curr = curr -> next;
	}
	int pos;
	if(len%2==0) pos=len/2;
	else pos=(len+1)/2;
	Node *curr1=head;
	while(pos-->1){
	    curr1 = curr1 -> next;
	}
	temp->next = curr1 -> next;
	curr1->next=temp;
	return head;
}