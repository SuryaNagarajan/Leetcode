class Solution {
public:
    int n;
    int t[505][505];
    int maxCoins(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        
        vector<int> arr={1};
        for(auto x:nums) arr.push_back(x);
        
        arr.push_back(1);
        n=arr.size();
        return help(arr,1,arr.size()-2);
    }
    
    int help(vector<int>&arr,int i,int j){
        if(i>j) return 0;
        
        if(i==j){
            int ans=arr[i];
            if(i-1>=0) ans*=arr[i-1];
            if(i+1<n) ans*=arr[i+1];
            
            return ans;
        }
        int maxi=0;
        if(t[i][j]!=-1) return t[i][j];
        
        for(int k=i;k<=j;k++){
            int ans=arr[k];
            
            if(i-1>=0) ans*=arr[i-1];
            
            if(j+1<n) ans*=arr[j+1];
            
            ans+=help(arr,i,k-1)+help(arr,k+1,j);
            
            maxi=max(maxi,ans);
        }
        
        return t[i][j]=maxi;       
        
    }
};