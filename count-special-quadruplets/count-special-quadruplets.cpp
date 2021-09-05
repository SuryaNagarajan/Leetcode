class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        unordered_map<int,int> m;
        int count=0,n=nums.size()-1;
        
        for(int i=n;i>1;i--){
            for(int j=i-1;j>0;j--){
                for(int k=j-1;k>=0;k--){
                    if(m[(nums[i]+nums[j]+nums[k])]) count+=m[(nums[i]+nums[j]+nums[k])];
                }
            }
            m[nums[i]]++;
        }
        
        return count;
        
    }
};