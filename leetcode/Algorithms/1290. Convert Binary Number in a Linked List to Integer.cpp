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
    int getDecimalValue(ListNode* head) {
        vector<int> nums;
        while(head!=NULL){
            nums.push_back(head->val);
            head = head->next;
        }
        int ans=0;

        reverse(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            ans+=nums[i]*(1<<i);
        }
        return ans;
    }
};