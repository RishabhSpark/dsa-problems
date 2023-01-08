void makeDoubly(struct Node *head)
{
    //Your code here
    Node* a=head;
    Node*t=head;
    a=a->next;
    while(t->next!=NULL){
        a->prev=t;
        a=a->next;
        t=t->next;
    }
}