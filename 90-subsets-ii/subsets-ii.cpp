class Solution {
public:
    void GetALLSubsetSum(vector<int>& nums, int N, vector<int>& comb,
                         vector<vector<int>>& ans, int ind) {
        {
            if (ind == N) {
                ans.push_back(comb);
                return;
            }

            // pick element
            comb.push_back(nums[ind]);
            GetALLSubsetSum(nums, N, comb, ans, ind + 1);
            comb.pop_back();
            
            
            while (ind + 1 < N && nums[ind] == nums[ind + 1]) //duplicate
            ind++;
            // nko gheu
            GetALLSubsetSum(nums, N, comb, ans, ind+1);
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