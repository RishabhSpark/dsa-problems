class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        stack<int> s;
        for(auto x: nums2){
            while(!s.empty() && s.top()<x){
                m[s.top()] = x;
                s.pop();
            }
            s.push(x);
        }
        for(auto& x: nums1) x = m.count(x) ? m[x] : -1;
        return nums1;
    }
};