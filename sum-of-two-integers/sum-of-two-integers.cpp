class Solution {
public:
    long long solve(long long a,unsigned long long b){
        return b == 0 ? a : getSum(a^b, (a&b)<<1);
    }

    int getSum(int a, int b) {
        return solve(a,b);
    }
    
};