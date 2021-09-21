class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,count=0;
        for(auto i:nums){
            count= i==1?count+1:0;
            maxi=max(maxi,count);
        }
        
        return maxi;
    }
};