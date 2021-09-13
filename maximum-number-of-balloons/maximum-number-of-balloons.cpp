class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string str="balloon";
        int count=INT_MAX;
        map<char,int> m;
        
        for(auto c:text) m[c]++;
        
        for(auto c:str){
            if(c=='l' || c=='o') {
                count = min(count,m[c]/2);
            }else{
                count=min(count,m[c]);    
            }
            
        }
        
        return count;
    }
};