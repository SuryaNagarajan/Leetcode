class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(auto c:s){
            
            if((int(c)>=65 && int(c)<=90) ||(int(c)>=97 && int(c)<=122) || (int(c)>=48 && int(c)<=57)){
                res+=tolower(c);
            }
        }
        
        for(int i=0,j=res.size()-1;i<j;i++,j--){
            if(res[i]!=res[j]) return false;
        }
        
        return true;
    }
};