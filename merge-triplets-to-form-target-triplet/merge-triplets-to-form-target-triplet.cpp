class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& nums, vector<int>& tgt) {
        
        vector<int> maxi(3,0);

        for(auto n:nums){
            if(n[0]<=tgt[0] && n[1]<=tgt[1] && n[2]<=tgt[2]){
                maxi[0]=max(n[0],maxi[0]);
                maxi[1]=max(n[1],maxi[1]);
                maxi[2]=max(n[2],maxi[2]);
                cout<<n[0]<<n[1]<<n[2]<<" ";
                if(maxi==tgt) return true;
            }
        }
        
        return false;
    }
};