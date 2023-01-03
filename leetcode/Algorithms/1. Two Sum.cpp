class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i!=j){
                    int summ=nums[i]+nums[j];
                    if(summ==target){
                        ans.push_back(i);
                    }
                }
            }
        }
        return ans;
    }
};