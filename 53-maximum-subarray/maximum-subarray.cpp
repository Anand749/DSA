class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = INT_MIN;
        long long sum = 0;

        long long n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum > maxi)
                maxi = sum;

            if (sum < 0)
                sum = 0;
        }

        return maxi;
    }
};
