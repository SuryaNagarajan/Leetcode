class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> res;
        vector<int> list;
        help(c,t,0,res,list);
        return res;
    }
    
    void help(vector<int>& c, int t, int start, vector<vector<int>>& res,vector<int> list){
        if(t < 0) return;
        if( t==0 ) {res.push_back(list);return;}
        
        for(int i=start;i<c.size();i++){
            list.push_back(c[i]);
            help(c,t-c[i],i,res,list);
            list.pop_back();
        }
        
    }
};