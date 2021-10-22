class Solution {
public:
    bool validPalindrome(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        if(s==s1)
            return true;
        int count=0;
        for(int i=0,j=s.size()-1;i<=j;i++,j--){
            if(s[i]!=s[j]){
                string s1=s;
                s1.erase(s1.begin()+i);
                string temp=s1;
                reverse(temp.begin(),temp.end());
                if(temp==s1) return true;
                
                s1=s;
                s1.erase(s1.begin()+j);
                temp=s1;
                reverse(temp.begin(),temp.end());
                if(temp==s1) return true;
                
                return false;
                
                    
            }
            
        }

        return true;
    }
};