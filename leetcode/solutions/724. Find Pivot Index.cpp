class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int lsum = 0;
        for(int i=0; i<nums.size(); i++){
            sum-=nums[i];
            if(sum==lsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};