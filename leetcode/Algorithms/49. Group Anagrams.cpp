class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector <string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            string sorted_i = strs[i];
            sort(sorted_i.begin(), sorted_i.end());
            mp[sorted_i].push_back(strs[i]);
        }

        for(auto i=mp.begin(); i!=mp.end(); i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};