class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size()==0) {
            intervals.push_back(newInterval);
            return intervals;
        }
        if(newInterval[0]<=intervals[0][0] && newInterval[1]>=intervals[intervals.size()-1][1]){
            intervals.clear();
            intervals.push_back(newInterval);
            return intervals;
        }
        intervals.push_back(newInterval);
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=1;i<intervals.size();){
            if(intervals[i-1][1] >= intervals[i][0]){
                if(intervals[i-1][1]<=intervals[i][1]){
                    intervals[i-1][1]=intervals[i][1];
                }
                intervals.erase(intervals.begin()+i);
            }else i++;
        }
        
        return  intervals;
    }
};