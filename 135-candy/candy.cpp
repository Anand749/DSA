class Solution {
public:
    int candy(vector<int>& nums) {
        int n = nums.size();
        vector<int> a (n, 1);
        vector<int> b (n, 1);

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                a[i] = a[i - 1] + 1;
        }
        for (int j = n - 2; j >= 0; j--) {
            if (nums[j] > nums[j + 1])
                b[j] = b[j + 1] + 1;
        }
        int sum = 0;

        for (int i = 0; i < n; i++) {
            nums[i] = max(a[i], b[i]);
            sum += nums[i];
        }

        return sum;
    }
};