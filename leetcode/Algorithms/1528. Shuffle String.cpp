class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string target = s;
        for(int i=0; i<s.size(); i++){
            int temp = indices[i];
            target[temp] = s[i];
        }
        return target;
    }
};