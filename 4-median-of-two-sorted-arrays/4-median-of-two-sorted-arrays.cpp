class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==0){
            int j=n/2;
            return (nums1[j]+nums1[j-1])/2.0;
        }
        else{
            int l=n/2;
            return nums1[l];
        }
    }
};