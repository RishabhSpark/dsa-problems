class Solution {
public:
    int myAtoi(string s) {
        double num = 0;
        int i=0;
        while(s[i] == ' ') i++;
        bool is_negative = false;
        if(s[i]=='+') i++;
        else if(s[i]=='-'){
            is_negative = true;
            i++;
        }
        while(i<s.size() && s[i]>='0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        if(is_negative) num*=-1;
        if(num > INT_MAX) num=INT_MAX;
        else if(num < INT_MIN) num=INT_MIN;
        cout<<num<<endl;
        return int(num);
    }
};