class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> ans_arr;
        vector<string> mapping = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for (auto i:words) {
            string ans;
            for (auto j:i) ans+=mapping[j-'a'];
            s.insert(ans);
        }
        return s.size();
    }
};