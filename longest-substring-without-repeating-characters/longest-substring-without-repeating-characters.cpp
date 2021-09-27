class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.size()==0) return 0;
        set<char> st;
        int right=0,left=0,ans=INT_MIN;
        
        for(right=0;right<s.size();right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left++]);
            }
            st.insert(s[right]);
            ans=max(ans,right-left+1);
        }
        
        return ans;

        
    }
};