class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int k=nums[0];
        for(int i=1; i<nums.size(); i++){
            k=max(k+nums[i], nums[i]);
            ans=max(ans, k);
        }
        return ans;
    }
};


// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int ans=nums[0],i,sum=0;
//         for(i=0;i<nums.size();i++){
//             sum+=nums[i];
//             ans=max(sum,ans);
//             sum=max(sum,0);
//         }
//         return ans;
//     }
// };