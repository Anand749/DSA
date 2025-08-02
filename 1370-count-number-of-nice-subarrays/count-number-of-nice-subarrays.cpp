class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int count = 0;
        int odd = 0;
        int n = nums.size();

        while (r < n) {
            if (nums[r] % 2 == 1)
                odd++;

            while (odd > k) {
                if (nums[l] % 2 == 1)
                    odd--;
                l++;
            }

            count += (r - l + 1);
            r++;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
