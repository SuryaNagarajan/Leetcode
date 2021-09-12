class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        long long n=rec.size(),count=0;
        unordered_map<double,int> m;
        double b[n];
        
        for(int i=0;i<n;i++){
            b[i]=double(rec[i][0])/rec[i][1];
        }
        for(int i=0;i<n;i++){
            if(m[b[i]]!=0){
                count+=m[b[i]];
            }
            m[b[i]]++;
        }
        
        return count;
    }
};