class Solution {
public:
    int rob(vector<int>& nums) {
       int prev=0,curr=0;
        for(int i=0;i<nums.size();i++){
            int temp=max(nums[i]+prev,curr);
            prev=curr;
            curr=temp;
        }
        
        return curr;
    }
};