class Solution {
public:
    void getAllCombination(vector<int>& arr, int target, vector<int> comb,
                           vector<vector<int>>& ans, int ind) {

        if (target == 0) {
            ans.push_back(comb);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            comb.push_back(arr[i]);
            getAllCombination(arr, target - arr[i], comb, ans, i + 1);
            comb.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int> comb;
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        getAllCombination(arr, target, comb, ans, 0);

        return ans;
    }
};