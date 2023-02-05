//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if(K>num || K==num-K+1) return head;
    
    Node *first = head, *first_prev = NULL;
    for (int i = 1; i < K; i++) {
        first_prev = first;
        first = first->next;
    }
    
    Node *second = head, *second_prev = NULL;
    for(int i=1; i<num-K+1; i++){
        second_prev = second;
        second = second->next;
    }
    
    if (first_prev) first_prev->next = second;
    if (second_prev) second_prev->next = first;

    Node *temp = first->next;
    first->next = second->next;
    second->next = temp;

    if (K == 1) head = second;
    if (K == num) head = first;

    return head;
    
}