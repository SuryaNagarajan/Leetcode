class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp,ans;
        for(int i=0;i<=s.size();i++){
            
            if((i==s.size() || isspace(s[i])) && temp.size()!=0){
                str.push_back(temp);
                temp="";
            }else if(!isspace(s[i])){
                temp+=s[i];
            } 
            
            
        }
         for(int i=str.size()-1;i>=0;i--){
             // cout<<str[str.size()-1]<<" ";
             ans+=str[i];
             if(i!=0) ans+=" ";
         }
        
        return ans;
    }
};