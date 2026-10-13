class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
         int n = nums.size(); 
         for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
       
        for (int i = 0; i < n; i++) {
            long long sq = 1LL * nums[i] * nums[i];

            if (i < n / 2)
                ans -= sq;
            else
                ans += sq;
        }
        return ans;
    }
};