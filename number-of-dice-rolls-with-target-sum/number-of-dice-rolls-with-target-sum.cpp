class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        // int count=0;
        vector<vector<int>> mem(d+1,vector<int>(target+1));
        return help(d,f,target,mem);
    }
    
    int help(int d,int f,int target,vector<vector<int>>&mem){
        if(d==0 || target<0) return target==0?1:0;
        
        if(mem[d][target]!=0) return mem[d][target]-1;
        
        int count=0;
        
        for(int i=1;i<=f;i++) 
            count=(count+help(d-1,f,target-i,mem))%1000000007;
        
        mem[d][target]=count+1;
        
        return count;
    }
};