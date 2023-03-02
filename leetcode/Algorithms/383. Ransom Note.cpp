class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(auto x: ransomNote) mp1[x]++;
        for(auto x: magazine) mp2[x]++;
        for(auto x: mp1){
            if(mp2[x.first]<x.second) return false;
        }
        return true;
    }
};