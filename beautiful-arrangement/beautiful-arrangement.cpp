class Solution {
public:
    int countArrangement(int n) {
        int count=0;
        vector<bool> vis(n,false);
        recursion(n,1,vis,count);
        return count;
    }
    
    void recursion (int n,int num,vector<bool>& vis,int &count){
        if(num>n) count++;
        
        for(int i=1;i<=n;i++){
            if(!vis[i] && (num%i == 0 || i%num == 0)){
                vis[i]=true;
                recursion(n,num+1,vis,count);
                vis[i]=false;
            }
        }
    }
};