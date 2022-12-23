class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zeroes_count = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
                zeroes_count--;
            }
        }
        for(int i=0; i<zeroes_count; i++){
            ans.push_back(0);
        }
        for(int i=0; i<ans.size(); i++){
            nums[i]=ans[i];
        }
    }
};