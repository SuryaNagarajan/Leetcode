class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,vector<int>> m;
        vector<int> ans;
        for(auto i:arr){
            m[__builtin_popcount(i)].push_back(i);
        }
        
        for(auto it=m.begin();it!=m.end();it++){
            for(int i=0;i<it->second.size();i++){
                ans.push_back(it->second[i]);
            }
        }
        
        return ans;
    }
};