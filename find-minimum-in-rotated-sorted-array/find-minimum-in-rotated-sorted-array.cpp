class Solution {
public:
    int findMin(vector<int>& num) {
        int left=0,right=num.size()-1,mid;
        
        while(left<right){
            if(num[left]<num[right]) return num[left];
            
            mid=left+(right-left)/2;
            
            if(num[mid]>=num[left]){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        
        return num[left];
    }
};