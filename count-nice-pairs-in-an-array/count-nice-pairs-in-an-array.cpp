class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,long> m;
        
        for(auto i:nums) m[i-rev(i)]++;
        
        for(auto it:m) count=(count+(it.second*(it.second - 1))/2)%1000000007;

        return count;
    }
    
    int rev(int num){
        
        string str=to_string(num);
        reverse(str.begin(),str.end());
        return stoi(str);
        
    }
};