class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
                count++;
            }
        }
        nums = ans;
        return count;
    }
};