class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        for(auto c:words){
            if(help(c,pattern)) ans.push_back(c);
        }
        
        return ans;
    }
    
    bool help(string str1,string str2){
        unordered_map<char,char>um;
        vector<bool> visited (26,false);
        
        for(int i = 0; i < str1.size(); i++){
            char c1 = str1[i],c2 = str2[i];
            
            if( um[c1] && um[c1]!=c2)
                return false;
            if( !um[c1] && visited[c2-'a'])
                return false;
            
            um[c1] = c2, visited[ c2-'a' ] = true;
        }
        return true;
    }
};