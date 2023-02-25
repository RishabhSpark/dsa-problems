class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        int sum2=0;
        for(int i=0; i<nums.size(); i++){
            sum-=nums[i];
            if(sum==sum2) return i;
            sum2+=nums[i];
        }
        return -1;
    }
};