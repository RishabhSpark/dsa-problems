class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for(int i=0; i<nums1.size(); i++){
            mp1[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            mp2[nums2[i]]++;
        }
        vector<int> ans;
        for(auto x :mp1){
            auto itr=mp2.find(x.first);
            if(itr!=mp2.end()){
                int temp=min(x.second,itr->second);
                while(temp!=0){
                    ans.push_back(x.first);
                    temp--;
                }
            }
        }
        return ans;
    }
};