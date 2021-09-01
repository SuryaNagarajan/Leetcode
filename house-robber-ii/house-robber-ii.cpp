class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<=1) return nums[0];
        int prev=0,curr=0,maxi=0,maxi2=0;
        
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(nums[i]+prev,curr);
            prev=curr;
            curr=maxi;
        }
        prev=0,curr=0;
        for(int i=1;i<nums.size();i++){
            maxi2=max(nums[i]+prev,curr);
            prev=curr;
            curr=maxi2;
        }
        
        return max(maxi,maxi2);
    }
};