class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.length()!=str2.length()) return false;
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;
        for(int i=0; i<str1.length(); i++){
            mp1[str1[i]]=i+1;
            mp2[str2[i]]=i+1;
        }
        for(int i=0; i<str1.length(); i++){
            if(mp1[str1[i]]!= mp2[str2[i]]) return false;
        }
        return true;
    }
};