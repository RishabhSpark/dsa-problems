// USING UNORDERED SET
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};


// USING ARRAY(SORTING)
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i=1; i<nums.size(); i++){
//             if(nums[i]==nums[i-1]) return true;
//         }
//         return false;
//     }
// };