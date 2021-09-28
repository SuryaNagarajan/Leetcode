class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        
        for(auto s:emails){
            string e;
            for(auto c:s){
                if(c=='+' || c=='@') break;
                if(c=='.') continue;
                e+=c;
            }
            
            e+=s.substr(s.find('@'));
            st.insert(e);
        }
        
        return st.size();
    }
};