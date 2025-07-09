class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
       sort(nums1.begin(),nums1.end());

       float sum=0;
       int n=nums1.size();

       if(n%2==0){
         sum=(nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
       }
       else sum=nums1[n/2];

       return sum;
    }
};