class Solution {
public: 
set<vector<int>> s;
    void getAllCombination(vector<int>& arr, int target, vector<int> comb,
                           vector<vector<int>>& ans, int ind) {
        
        if (target == 0) {
            if (s.find(comb) == s.end())
                ans.push_back(comb);
            s.insert(comb);
        }
        if (ind == arr.size() || target < 0)
            return;

        comb.push_back(arr[ind]);
        getAllCombination(arr, target - arr[ind], comb, ans, ind);

        comb.pop_back();
        getAllCombination(arr, target , comb, ans, ind + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> comb;
        vector<vector<int>> ans;

        getAllCombination(arr, target, comb, ans, 0);

        return ans;
    }
};