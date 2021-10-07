class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool ans;
        int n=board.size(),m=board[0].size(),k=word.size();
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<m;j++)
         {
           if(help(board,word,i,j,0,n,m,k))
               return true;
         }
        }
            return false;
        
    }
    
    bool help(vector<vector<char>>& board, string word,int i,int j,int w,int n,int m,int k)
    {
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]==NULL || word[w]!=board[i][j] ) 
            return false;
        
        if(w+1>=k) return true;
                
            char t=board[i][j];
            board[i][j]=NULL;
            if(help(board,word,i+1,j,w+1,n,m,k) || help(board,word,i,j+1,w+1,n,m,k) || help(board,word,i-1,j,w+1,n,m,k) || help(board,word,i,j-1,w+1,n,m,k))
                return true;
            board[i][j] = t;
        
        
            return false;
    }
    
};