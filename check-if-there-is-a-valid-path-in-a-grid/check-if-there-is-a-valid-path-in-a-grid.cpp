class Solution {
public:
    
    bool isValid(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>&vis,int n,int m){
        return (i<n && j<m && i>=0 && j>=0);
    }
    
    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>&vis,int n,int m){
        if(vis[i][j]==true) return;
        vis[i][j]=true;
        int left=0,right=0,up=0,down=0;
        
        if(grid[i][j]==1){
            left=right=1;
        }else if(grid[i][j]==2){
            up=down=1;
        }else if(grid[i][j]==3){
            left=down=1;
        }else if(grid[i][j]==4){
            right=down=1;
        }else if(grid[i][j]==5){
            up=left=1;
        }else{
            up=right=1;
        }
        
        if(left){
            if(isValid(grid,i,j-1,vis,n,m)&&(grid[i][j-1]==4 || grid[i][j-1]==1 || grid[i][j-1]==6)){
                dfs(grid,i,j-1,vis,n,m);
            }
        } if(right){
            if(isValid(grid,i,j+1,vis,n,m)&&(grid[i][j+1]==3 || grid[i][j+1]==1 || grid[i][j+1]==5)){
                dfs(grid,i,j+1,vis,n,m);
            }
        } if(up){
            if(isValid(grid,i-1,j,vis,n,m)&&(grid[i-1][j]==4 || grid[i-1][j]==2 || grid[i-1][j]==3)){
                dfs(grid,i-1,j,vis,n,m);
            }
        } if(down){
            if(isValid(grid,i+1,j,vis,n,m)&&(grid[i+1][j]==5 || grid[i+1][j]==2 || grid[i+1][j]==6)){
                dfs(grid,i+1,j,vis,n,m);
            }
        }
    }
    
    
    bool hasValidPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
       vector<vector<bool>> vis(n,vector<bool>(m,false));
        dfs(grid,0,0,vis,n,m);
        
        return vis[n-1][m-1];
    }
};