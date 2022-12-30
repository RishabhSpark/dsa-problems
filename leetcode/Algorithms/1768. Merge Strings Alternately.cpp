class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0, j=0;
        while(i<word1.size() && j<word2.size()){
            ans+=string()+word1[i]+word2[j];
            i++;
            j++;
        }
        ans+=word1.substr(i)+word2.substr(j);
        return ans;
    }
};