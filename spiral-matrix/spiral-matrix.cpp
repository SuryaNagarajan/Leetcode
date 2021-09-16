class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        bool flag=true;
        int r=matrix.size(),c=matrix[0].size();
        int fc=c,tc=0,lr=0,tot=r*c;
        while(r>0 && c>0)
        {
            for(int i=lr;i<c;i++)
            {
                res.push_back(matrix[lr][i]);
                if(tot==res.size()) 
                {
                flag=false;
                break;
                }
            }
            lr++;
            c--;
            
            if(!flag) break;
            
            for(int i=1+tc;i<r;i++)
            {
                res.push_back(matrix[i][c]);
                if(tot==res.size()) 
                {
                flag=false;
                break;
                }
            }
            r--;
            
            if(!flag) break;
            
            for(int i=c-1;i>tc;i--)
            {
                res.push_back(matrix[r][i]);
                if(tot==res.size()) {
                flag=false;
                break;
                }
            }
            
            if(!flag) break;
            
            for(int i=r;i>=lr;i--)
            {
                res.push_back(matrix[i][tc]);
                if(tot==res.size()){
                flag=false;
                break;
                }
            }
            tc++;
            if(!flag) break;
            
        }
        return res;
    }
    
};