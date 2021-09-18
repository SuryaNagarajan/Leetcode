class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> vec;
        multimap<vector<int>,int> m;
        
        for(int i=0;i<mat.size();i++){
            m.insert(make_pair(mat[i],i));
        }
        
        for(auto i:m){
            vec.push_back(i.second);
            if(--k==0) return vec;
        }
        
        return {};
    }
};