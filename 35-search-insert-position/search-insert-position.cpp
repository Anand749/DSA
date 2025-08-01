class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();

        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==target)return i;
        //     else if(nums[i]>target)return i;
        //     else if(nums[i]<target && i==n-1)return i+1;
        //     else if(nums[i]>target && i==0)return i;

        // }
        // return -1;

        int low=0,high=n-1;
        int ans=n;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;

            }
            else low=mid+1;
             
        }

        return ans;
    }
};