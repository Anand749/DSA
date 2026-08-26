class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {

        if (nums.empty()) {
            return {};
        }

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        result.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {

            vector<int>& last = result.back();

            if (nums[i][0] <= last[1]) {
                last[1] = max(last[1], nums[i][1]);
            }
            else {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};