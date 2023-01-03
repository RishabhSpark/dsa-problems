// USING HASHING O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        if(s.length()!=t.length()) return false;
        for(int i=0; i<s.length(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for (int i = 0; i < s.size(); i++){
            if (mp1[s[i]] != mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};

// USING SORTING O(nlogn)
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if(t==s){
//             return true;
//         }
//         return false;
//     }
// };