class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size()==0 || nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int diff=nums[k-1]-nums[0];
        for(int i=1;i+k-1<nums.size();i++){
            diff=min(diff,nums[i+k-1]-nums[i]);
        }
        
        return diff;
        
    }
};