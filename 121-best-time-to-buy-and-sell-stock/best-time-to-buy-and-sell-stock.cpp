class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        if(nums.size()==1)return 0;
        for (int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i - 1];
            sum += diff;
            if (sum > maxi)
                maxi = diff;

            if (sum < 0)
                sum = 0;

            maxi = max(maxi, sum);
        }

        return maxi;
    }
};