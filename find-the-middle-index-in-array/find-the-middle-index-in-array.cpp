class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        
        int sumL=0,sumR=0,idx=nums.size()-1;
        
        for(int i=nums.size()-1;i>0;i--){
            sumR+=nums[i];
            idx--;
        }
        
        if(sumL==sumR) return idx;
        
        for(int i=1;i<nums.size();i++){
            sumL+=nums[i-1];
            sumR-=nums[i];
            idx++;
            if(sumL==sumR) return idx;
        }
        
        return -1;
    }
};