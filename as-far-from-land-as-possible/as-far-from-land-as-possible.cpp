class Solution {
public:
    
    bool isValid(int i,int j,int n,int m,vector<vector<int>>& grid){
        
        return i>=0 &&  i<n && j>=0 && j<m && grid[i][j]==0;   
    }
    
    
    int maxDistance(vector<vector<int>>& grid) {
        int maxi=0,n=grid.size(),m=grid[0].size();
        
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({{i,j},0});
                }
            }
        }
        
        while(!q.empty()){
            int s=q.size();
            
            for(int k=0;k<s;k++){
                auto f=q.front();
                q.pop();
                
                int i=f.first.first,j=f.first.second,dist=f.second;
                
                maxi=max(maxi,dist);
                
                if(isValid(i+1,j,n,m,grid)){
                    q.push({{i+1,j},dist+1});
                    grid[i+1][j]=1;
                }
                if(isValid(i,j+1,n,m,grid)){
                    q.push({{i,j+1},dist+1});
                    grid[i][j+1]=1;
                }
                if(isValid(i-1,j,n,m,grid)){
                    q.push({{i-1,j},dist+1});
                    grid[i-1][j]=1;
                }
                if(isValid(i,j-1,n,m,grid)){
                    q.push({{i,j-1},dist+1});
                    grid[i][j-1]=1;
                }
            }
        }
        
        return maxi==0?-1:maxi;
        
    }
};