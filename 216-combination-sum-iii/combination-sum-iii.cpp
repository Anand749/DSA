class Solution {
public:
    void funcn(vector<vector<int>>& ans, vector<int> comb, int k, int sum,
               int ind) {
        if (sum == 0 && comb.size() == k) {
            ans.push_back(comb);
            return;
        }
        if (sum < 0 || comb.size() > k)
            return;

        for (int i = ind; i <= 9; i++) {
        
            comb.push_back(i);
            funcn(ans, comb, k, sum - i, i + 1);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> comb;

        funcn(ans, comb, k, n, 1);
        return ans;
    }
};