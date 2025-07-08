class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // if(n ==1)return 0;
        // if(nums[0]>nums[1])return 0;
        //   if(nums[n-1]>nums[n-2])return n-1;
        // for(int i=1;i<n;i++)
        // {
        //     if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
        //     {
        //         return i;

        //     }
        // }

        // return -1;

        int low = 0;
        int high = n - 1;
        int ans = INT_MIN;
        while (low < high) {
            int mid = (low + high) / 2;

            if (nums[mid] > nums[mid + 1]) {

                high = mid;
            } else {

                low = mid + 1;
            }
        }

        return low;
    }
};
