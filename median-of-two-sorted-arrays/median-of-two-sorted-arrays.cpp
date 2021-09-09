class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0 && nums2.size()==0) return 0.0;
        if(nums1.size()==0 && nums2.size()==1) return nums2[0]/1.0;
        if(nums1.size()==1 && nums2.size()==0) return nums1[0]/1.0;
        vector<int> vec;
        
        for(int i=0;i<nums1.size();i++) vec.push_back(nums1[i]);
        
        for(int i=0;i<nums2.size();i++) vec.push_back(nums2[i]);
        
        sort(vec.begin(),vec.end());
        
        if((vec.size())%2==1){
            int mid=floor(vec.size()/2.0);
            return vec[mid]/1.0;
        }
        
        int mid=vec.size()/2;
        
        return (vec[mid]+vec[mid-1])/2.0;
    }
};