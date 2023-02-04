/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        if(head==NULL) return NULL;
        unordered_set<int> set;
        Node *curr = head;
        Node *temp = NULL;
        while(curr!=NULL){
            if(set.find(curr->data)!=set.end()){
                temp->next = curr->next;
            }
            else{
                set.insert(curr->data);
                temp = curr;
            }
            curr = temp->next;
        }
        return head;
    }
};