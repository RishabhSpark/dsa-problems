class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int diff = 0;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]) i++;
            else{
                diff = max(diff, j-i);
                j++;
            }
        }
        return diff;
    }
};