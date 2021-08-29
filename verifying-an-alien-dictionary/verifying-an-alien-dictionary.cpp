class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map <char,int> m;
        
        for(int i=0;i<order.size();i++){
            m[order[i]]=i+1;
        }
        
        for(string& s:words){
            for(char& c:s){
                c=m[c];
                cout<<c<<" ";
            }
        }
        
        return is_sorted(words.begin(),words.end());
    }
};