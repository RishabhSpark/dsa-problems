class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char startcol = s[0],startrow = s[1];
        char endcol = s[3], endrow = s[4];
        for(char i = startcol; i<=endcol; i++){
            for(char j=startrow; j<=endrow; j++){
                ans.push_back(string(1,i)+j);
            }
        }
        return ans;
    }
};