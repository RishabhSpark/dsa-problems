/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        if(head==NULL) return NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // head = prev;
        return prev;
    }
    
};