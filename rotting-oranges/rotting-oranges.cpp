class Solution {
public:
    bool isValid(vector<vector<int>>& grid,int n,int m,int i,int j){
        if(i>=n || i<0 || j>=m || j<0 || grid[i][j]==3 || grid[i][j]==0 || grid[i][j]==2) return false;
        
        return true;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int count=-1,n=grid.size(),m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=3;
                }
            }
        }
        
        
        
        while(!q.empty()){
            
            int s=q.size();
            for(int k=0;k<s;k++){
                int i=q.front().first,j=q.front().second;
                
            
                if(isValid(grid,n,m,i+1,j)){
                    grid[i+1][j]=3;
                    q.push({i+1,j});
                }
                if(isValid(grid,n,m,i,j+1)){
                    grid[i][j+1]=3;
                    q.push({i,j+1});
                }
                if(isValid(grid,n,m,i-1,j)){
                    grid[i-1][j]=3;
                    q.push({i-1,j});
                }
                if(isValid(grid,n,m,i,j-1)){
                    grid[i][j-1]=3;
                    q.push({i,j-1});
                }
            
               q.pop();
            }
            count++;
        }
        
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return count==-1?0:count;
        
    }
};