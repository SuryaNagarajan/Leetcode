class Solution {
#define ll long long
public:
long long gridGame(vector<vector<int>>& arr) {
        int n = arr[0].size();
        
		//we make two prefix arrays to store prefix of row 0 and row 1
        ll pre1[n+1];
        ll pre2[n+1];
        
		//filling the prefix arrays
        pre1[0] = arr[0][0] , pre2[0] = arr[1][0];
        for(int i=1;i<n;i++)
        {
            pre1[i] = pre1[i-1] + arr[0][i];
            pre2[i] = pre2[i-1] + arr[1][i];
            // cout<<pre1[i]<<" ";
        }
        
		//var to store result
        ll res = LONG_MAX;
        
        for(int i=0;i<n;i++)
        {
			//we have 2 options
			// 1. to take the values in row 0 after the turning point
			//2. to take the values in row 1 before turning point
            ll op1 = pre1[n-1] - pre1[i];
            ll op2 = i==0 ? 0 : pre2[i-1];
            // cout<<op1<<" "<<op2<<"\n";
			
			//the 2nd robot wants to take the best of two options avalable
			//so we take max of op1 and op2
			//but the first robot wants to minimize its score,
			//hence we take min
            res = min(res,max(op1,op2));
        }
        
        return res;
    }
};
// [[20,3,20,17,2,12,15,17,4,15],[20,10,13,14,15,5,2,3,14,3]]