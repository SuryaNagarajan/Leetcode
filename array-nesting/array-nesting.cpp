class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxi=0,start,count;
    vector<bool> vis(nums.size(),false);
    for(int i=0;i<nums.size();i++){
        if(!vis[i]){
            start=nums[i],count=0;
            do{
                vis[start]=true;
                start=nums[start];
                count++;
            }while(start!=nums[i]);
            maxi=max(count,maxi);
        }
        
    }
        return maxi;
        
    }
};