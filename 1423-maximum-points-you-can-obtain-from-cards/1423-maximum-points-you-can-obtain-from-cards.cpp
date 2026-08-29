class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        int n = nums.size();

        int l = 0;         
        int r = n - 1;     

        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[l];
            l++;
        }

        maxi = sum;

        for (int i = 0; i < k; i++) {

            l--;              
            sum -= nums[l];

            sum += nums[r];   
            r--;

            maxi = max(maxi, sum);
        }

        return maxi;
    }
};