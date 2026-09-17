class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        unordered_map<int, int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        for (int i = 1;; i++) {
            if (mpp.find(i) == mpp.end())
                cnt++;
            if (cnt == k)
                return i;
        }
        return -1;
    }
};