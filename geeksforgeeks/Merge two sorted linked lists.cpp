#include<bits/stdc++.h>
 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    vector<int> arr1;
    while(head1!=NULL){
        arr1.push_back(head1->data);
        head1 = head1->next;
    }
    while(head2!=NULL){
        arr1.push_back(head2->data);
        head2 = head2->next;
    }
    sort(arr1.begin(), arr1.end());
    Node *merge = new Node(-1);
    Node *temp = merge;
    for(int i=0; i<arr1.size(); i++){
        merge->next = new Node(arr1[i]);
        merge = merge->next;
    }
    temp = temp->next;
    return temp;
}  