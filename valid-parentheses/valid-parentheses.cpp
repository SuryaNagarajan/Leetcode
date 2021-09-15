class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto c:s){
            if(st.empty()||c=='('||c=='{'||c=='[')
                st.push(c);
            else if((st.top()=='(' && c==')') || (st.top()=='[' && c==']') || (st.top()=='{' && c=='}') )
                st.pop();
            else
                return false;
        }
        
        return st.empty();
    }
};