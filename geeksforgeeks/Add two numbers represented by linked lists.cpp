/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    // Node *insertBegin(Node *head, int x){
    //     Node *temp = new Node(x);
    //     temp -> next = head;
    //     return temp;
    // }
    
    Node* addition(Node* temp1, Node* temp2, int size1, int size2){
        Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
        if (temp1->next == NULL && temp2->next == NULL) {
            newNode->data = (temp1->data + temp2->data);
            newNode->next = NULL;
            return newNode;
        }
        
        Node* returnedNode = (struct Node*)malloc(sizeof(struct Node));
        if (size2 == size1) {
            returnedNode = addition(temp1->next, temp2->next, size1 - 1, size2 - 1);
            newNode->data = (temp1->data + temp2->data) + ((returnedNode->data) / 10);
        }
        else {
            returnedNode = addition(temp1, temp2->next, size1, size2 - 1); 
            newNode->data = (temp2->data) + ((returnedNode->data) / 10);
        }
        returnedNode->data = (returnedNode->data) % 10;
        newNode->next = returnedNode;
     
        return newNode;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *temp1 = first;
        Node *temp2 = second;
     
        int size1 = 0, size2 = 0;
        while (temp1 != NULL) {
            temp1 = temp1->next;
            size1++;
        }
        while (temp2 != NULL) {
            temp2 = temp2->next;
            size2++;
        }
     
        Node* returnedNode = (struct Node*)malloc(sizeof(struct Node));
     
        if (size2 > size1) {
            returnedNode = addition(first, second, size1, size2);
        }
        else {
            returnedNode = addition(second, first, size2, size1);
        }
        
        Node *ans = NULL;
        if (returnedNode->data >= 10) {
            ans = (struct Node*)malloc(sizeof(struct Node));
            ans->data = (returnedNode->data) / 10;
            returnedNode->data = returnedNode->data % 10;
            ans->next = returnedNode;
        }
        else ans = returnedNode;
        return ans;
        // long long num1=0, num2=0;
        // int x=0, y=0;
        // while(first->next!=NULL){
        //     num1 +=first->data;
        //     num1*=10;
        //     first=first->next;
        // }
        // num1+=first->data;
        
        // while(second->next!=NULL){
        //     num2 +=second->data;
        //     num2*=10;
        //     second=second->next;
        // }
        // num2+=second->data;
        
        
        // long long num3 = num1+num2;
        // Node *ans = NULL;
        // while(num3!=0){
        //     int rem = num3%10;
        //     num3/=10;
        //     ans = insertBegin(ans, rem);
        // }
        // return ans;
    }
};