class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int totalsum=0;
        int digitsum=0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            totalsum+=num;
            while(num!=0){
                int rem = num%10;
                digitsum+=rem;
                num = num/10;
            }
        }
        return abs(totalsum-digitsum);
    }
};