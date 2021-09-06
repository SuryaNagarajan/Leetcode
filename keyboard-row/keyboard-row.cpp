class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        string f="qwertyuiop",s="asdfghjkl",t="zxcvbnm";
        
        for(auto x:words){
            int ft=0,sd=0,th=0;
            for(auto i:x){
                if(f.find(i)!=-1) ft++;
                else if(s.find(i)!=-1) sd++;
                else if(t.find(i)!=-1) th++;
            }
            if((ft==0 && sd==0) || (ft==0 && th==0) || (th==0 && sd==0)){
                // cout<<ft<<" "<<sd<<" "<<th<<" ";
                res.push_back(x);
            }
        }
        
        return res;
        
    }
};