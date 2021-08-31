class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& operation) {
        if(operation.size()==0) return m*n;
        
        int min_row=m,min_col=n;
        
        for(auto ops:operation){
            min_row=min(min_row,ops[0]);
            min_col=min(min_col,ops[1]);
        }
        
        return min_row*min_col;
    }
    
};