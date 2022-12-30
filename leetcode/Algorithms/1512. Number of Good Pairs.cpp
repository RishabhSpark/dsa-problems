class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        for(int j=0; j<nums.size();j++){
            for(int i=0; i<nums.size(); i++){
                if(i!=j){
                    if(nums[j]==nums[i]) ans+=1;
                }
            }
        }
        return ans/2;
    }
};