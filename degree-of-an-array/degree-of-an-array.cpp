class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()==1) return 1;
        unordered_map<int,vector<int>> m;
        int count=0,dist=INT_MAX;
        
        for(int i=0;i<nums.size();i++) m[nums[i]].push_back(i);
        
        for(auto it=m.begin();it!=m.end();it++) count=max(count,(int)it->second.size());
        
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second.size()==count)
                dist=min(dist,it->second.back()-it->second[0]+1);
        }
        
        return dist;
        
        
        
    }
};