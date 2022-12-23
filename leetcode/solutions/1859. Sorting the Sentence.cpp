class Solution {
public:
    string sortSentence(string s) {
        string ans;
        // vector<int> arr;
        for(int j=0; j<9; j++){
            int start = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i]-'0' == j+1){
                    ans.append(s,start,i-start);
                    ans.push_back(' ');
                    break;
                }
                if(s[i]==' '){
                    start = i+1;
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};