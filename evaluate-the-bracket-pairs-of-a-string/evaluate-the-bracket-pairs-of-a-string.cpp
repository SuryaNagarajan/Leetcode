class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        string ans,temp;
        map<string,string> m;
        bool flag=false;
        
        for(auto s:kn){
            m[s[0]]=s[1];
        }
        
        for(auto c:s){
            if(!flag && c=='('){
                flag=true;
            }else if(flag && c!=')'){
                temp+=c;
            }else if(flag && c==')'){
                if(m[temp]=="") ans+='?';
                else ans+=m[temp];
                
                flag=false;
                temp="";
            }else if(!flag){
                ans+=c;
            }
        }
        
        return ans;
        
    }
};