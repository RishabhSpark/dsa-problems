class Solution {
public:
    string freqAlphabets(string s) {
        string v;
        for(int i=0; i<s.length(); i++){
            int num = s[i] - '0';
            if(i + 2 < s.size() && s[i + 1] != '#' && s[i + 2] == '#'){
                num = num*10 + (s[i + 1] - '0');
                i+=2;
            }
            v.push_back('a' + num - 1);
        }
        return v;
    }
};