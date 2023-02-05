/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode *reverse(ListNode *head){
        ListNode *curr = head;
        ListNode *next = NULL;
        ListNode *prev = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        // curr->next = NULL;
        // prev->next = NULL;
        // ListNode *curr1 = head;
        // ListNode *curr2 = prev;
        // while(curr1!=NULL){
        //     if(curr1->val!=curr2->val) return false;
        //     curr1=curr1->next;
        //     curr2=curr2->next;
        // }
        // if(curr1->val!=curr2->val) return false;
        // return true;
        if (head->next == NULL)
            return true;
        ListNode *middle = findMiddle(head);

        middle->next = reverse(middle->next);

        ListNode *temp1 = head;
        ListNode *temp2 = middle->next;
        while (temp2)
        {
            if (temp1->val != temp2->val)
                return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};