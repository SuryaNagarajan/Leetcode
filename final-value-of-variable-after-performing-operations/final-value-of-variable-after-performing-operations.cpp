class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        
        int num=0;
        
        for(auto c:op) num+=c.find('+')!=-1?1:-1;
        
        return num;
    }
};