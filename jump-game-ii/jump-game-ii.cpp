class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        int maxi(0),count(0),end(0);
        for(int i=0;i<nums.size()-1;i++){
           maxi=max(maxi,i+nums[i]);
            if(i==end){
                count++;
                end=maxi;
            }
            
        }
        
        return count;
    }
};