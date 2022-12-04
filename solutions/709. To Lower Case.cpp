class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(int i=0; i<s.length(); i++){
            int k = s[i];
            if(k>=65 &&k<=90) ans.push_back(int(s[i])+32);
            else ans.push_back(s[i]);
        }
        return ans;
    }
};