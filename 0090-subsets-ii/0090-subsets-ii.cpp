class Solution {
public:
    void GetALLSubsetSum(vector<int>& nums, int N, vector<int>& comb,
                         vector<vector<int>>& ans, int ind) {
        ans.push_back(comb);
        for (int i = ind; i < N; i++) {

            if (i > ind && nums[i] == nums[i - 1])
                continue;

            comb.push_back(nums[i]);
            GetALLSubsetSum(nums, N, comb, ans, i + 1);
            comb.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> comb;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        GetALLSubsetSum(nums, nums.size(), comb, ans, 0);

        return ans;
    }
};
