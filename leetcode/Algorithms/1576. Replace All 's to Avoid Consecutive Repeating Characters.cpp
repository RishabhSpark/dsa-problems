class Solution {
public:
    string modifyString(string s) {
        for(int i=0; i<s.size(); i++){
            if(s[i]=='?'){
                for(int j=0; j<26; ++j){
                    bool valid = true;
                    if(i>0&&j+'a'==s[i-1]) valid=false;
                    if(i<s.size()-1&&s[i + 1]!='?' && j+'a'==s[i+1]) valid=false;
                    if(valid){
                        s[i] = j + 'a';
                        break;
                    }
                }
            }
        }
        return s;
    }
};