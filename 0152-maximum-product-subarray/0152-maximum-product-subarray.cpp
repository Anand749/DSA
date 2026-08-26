class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pfix = 1, sfix = 1;
        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (pfix == 0)
                pfix = 1;
            if (sfix == 0)
                sfix = 1;

            pfix = pfix * nums[i];
            sfix = sfix * nums[n - i - 1];

            maxi = max(maxi,(max(pfix, sfix)));
        }

        return maxi;
    }
};