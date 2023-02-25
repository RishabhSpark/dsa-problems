class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> target_map;
        for(int i=0; i<target.size(); i++){
            target_map[target[i]]++;
        }
        
        unordered_map<char, int> s_map;
        for(int i=0; i<s.size(); i++){
            s_map[s[i]]++;
        }

        int mn = INT_MAX; 
        for(auto x : target_map) {
             mn = min(mn, s_map[x.first]/x.second); 
        }
        return mn ; 
    }
};