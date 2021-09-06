class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxi=releaseTimes[0],n=releaseTimes.size();
        char ans=keysPressed[0];
        
        for(int i=1;i<n;i++){
            if(maxi < releaseTimes[i]-releaseTimes[i-1]){
                maxi=releaseTimes[i]-releaseTimes[i-1];
                ans=keysPressed[i];
            }else if(maxi == releaseTimes[i]-releaseTimes[i-1] && ans-'a' < keysPressed[i]-'a'){
                maxi=releaseTimes[i]-releaseTimes[i-1];
                ans=keysPressed[i];
            }
        }
        
        return ans;
    }
};