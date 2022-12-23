class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int per = 0;
        for(int i=0; i<=nums.size()-3; i++){
            int summ = 0;
            if(nums[i]+nums[i+1]>nums[i+2]){
                summ = nums[i]+nums[i+1]+nums[i+2];
                if (summ>per) per = summ;
            }
        }
        return per;
    }
};