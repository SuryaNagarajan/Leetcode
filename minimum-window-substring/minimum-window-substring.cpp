class Solution {
public:
    string minWindow(string s, string t) {
        int minL=INT_MAX,start=0,end=0,minStart=0,c=0;
        
        unordered_map<char,int> m;
        
        for(auto a:t) m[a]++;
        
        for(end=0;end<s.size();end++){
            if(m[s[end]]>0) c++;
            m[s[end]]--;
            
            if(c==t.size()){
                
                while(start<end && m[s[start]]<0){
                    m[s[start]]++;
                    start++;
                }
                
                if(end-start+1<minL){
                    minL=end-start+1;
                    minStart=start;
                }
                
                m[s[start]]++;
                start++;
                c--;
            }
        }
        
        return minL==INT_MAX?"":s.substr(minStart,minL);
        
    }
};