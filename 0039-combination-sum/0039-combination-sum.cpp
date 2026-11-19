class Solution {
public:
    void comb(int ind, int target, vector<int>& ds, vector<int>& c,
              vector<vector<int>>& ans, int t) {
        if (ind == c.size()) {
            if (target == 0)
                ans.push_back(ds);

            return;
        }

        if (c[ind] <= target) {
            ds.push_back(c[ind]);
            comb(ind, target - c[ind], ds, c, ans, t);
            ds.pop_back();
        }
        comb(ind + 1, target, ds, c, ans, t);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int> ds;
        comb(0, t, ds, c, ans, t);
        return ans;
    }
};