class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3) return 0;
        for(int i=0; i<s.length()-2; i++){
            char s1 = s[i];
            char s2 = s[i+1];
            char s3 = s[i+2];
            if(s1!=s2 && s1!=s3 && s2!=s3){
                count++;
            }
        }
        return count;
    }
};