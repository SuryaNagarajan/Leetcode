class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
       vector<pair<int,string>> vec;
        for(auto s:nums) vec.emplace_back(s.size(),s);
        sort(vec.rbegin(),vec.rend());
        return vec[k-1].second;
        
    }
};