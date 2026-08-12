class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (int num : nums)
            mpp[num] = 1;

        int maxi = 0;
        for (auto &p : mpp) {
            int it = p.first;

            if (!mpp.count(it - 1)) {
                int curr = it;
                int cnt = 1;

                while (mpp.count(curr + 1)) {
                    curr++;
                    cnt++;
                }

                maxi = max(maxi, cnt);
            }
        }

        return maxi;
    }
};
