class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int j=0; j<n; j++){
            for(int i=0; i<nums.size(); i+=n){
                ans.push_back(nums[i+j]);
            }
        }
        return ans;
    }
};