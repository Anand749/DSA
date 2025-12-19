class Solution {
public:
    int sum1(vector<int>& nums, int mid) {
        int n = nums.size();
        int ans = 0;

        for (auto it : nums) {
            ans+=ceil((double)it / mid);
        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int tar) {
        int l = 1,r = *max_element(nums.begin(), nums.end());
        int ans=r;
        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (sum1(nums, mid) <= tar) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        return ans;
    }
};