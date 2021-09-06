class Solution {
public:
    
    bool isValid(vector<vector<int>>& grid,int i,int j,int n,int m){
        return (i>=0 && i<n && j>=0 && j<m && grid[i][j]==0);
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int count=1,n=grid.size(),m=grid[0].size();
        if(grid[0][0]!=0 || grid[n-1][m-1]!=0) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        
        while(!q.empty()){
            int s=q.size();
            for(int k=0;k<s;k++){
                int i=q.front().first,j=q.front().second;
                q.pop();
                grid[i][j]=1;
                if(i==n-1 && j==m-1) return count;
                if(isValid(grid,i+1,j,n,m)){
                    q.push({i+1,j});
                    grid[i+1][j]=1;
                }
                if(isValid(grid,i,j+1,n,m)){
                    q.push({i,j+1});
                    grid[i][j+1]=1;
                }
                if(isValid(grid,i-1,j,n,m)){
                    q.push({i-1,j});
                    grid[i-1][j]=1;
                }
                if(isValid(grid,i,j-1,n,m)){
                    q.push({i,j-1});
                    grid[i][j-1]=1;
                }
                if(isValid(grid,i-1,j-1,n,m)){
                    q.push({i-1,j-1});
                    grid[i-1][j-1]=1;
                }
                if(isValid(grid,i+1,j+1,n,m)){
                    q.push({i+1,j+1});
                    grid[i+1][j+1]=1;
                }
                if(isValid(grid,i+1,j-1,n,m)){
                    q.push({i+1,j-1});
                    grid[i+1][j-1]=1;
                }
                if(isValid(grid,i-1,j+1,n,m)){
                    q.push({i-1,j+1});
                    grid[i-1][j+1]=1;
                }
            }
            count++;

        }
        
        return -1;
    }
};