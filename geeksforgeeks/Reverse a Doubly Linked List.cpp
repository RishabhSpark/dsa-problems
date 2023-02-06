/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    //Your code here
    if(head==NULL) return NULL;
    if(head->next == NULL) return head;
    
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr=curr->prev;
    }
    return prev->prev;
}
