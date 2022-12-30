class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(int i=0; i<items.size(); i++){
            string typei = items[i][0];
            string colori = items[i][1];
            string namei = items[i][2];
            if(ruleKey=="type"){
                if(typei==ruleValue) count++;
            }
            if(ruleKey=="color"){
                if(colori==ruleValue) count++;
            }
            if(ruleKey=="name"){
                if(namei==ruleValue) count++;
            }
        }
        return count;
    }
};