class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count = 0;
        vector<int> arr1(26,0);
        for(int i=0; i<chars.size(); i++){
            arr1[chars[i]-97]++;
        }
        for(int i=0; i<words.size(); i++){
            vector<int> arr2(26, 0);
            for(int j=0; j<words[i].size(); j++){
                arr2[words[i][j]-97]++;
            }
            bool check = true;
            for(int j=0; j<arr2.size(); j++){
                if(arr1[j]<arr2[j]) check = false;
            }
            if(check==true){
                count+=words[i].size();
            }
        }
        return count;
    }
};