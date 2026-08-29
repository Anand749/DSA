class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi = 0;
        int n = nums.size();
        int l = 0, r = 0;
        int zcnt = 0;

        while (r < n) {
            if (nums[r] == 0)
                zcnt++;

            while (zcnt > k) {
                if(nums[l]==0)zcnt--;
                l++;
            }

            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};