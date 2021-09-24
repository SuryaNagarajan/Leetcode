class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int sum=0;
        for(auto i:nums) sum+=++m[i]==1?i:m[i]==2?-i:0;
        return sum;
        
    }
};