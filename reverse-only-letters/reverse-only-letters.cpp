class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str;
        
        for(auto c:s){
            if(isalpha(c)) str+=c;
        }
        reverse(str.begin(),str.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) s[i]=str[j++];
        }
        
        return s;
    }
};