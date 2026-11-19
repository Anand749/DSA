
class Solution {
public:
    void comb(int ind, int target, vector<int>& ds,
              vector<int>& c, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        if (ind == c.size())
            return;

        if (c[ind] <= target) {
            ds.push_back(c[ind]);

            comb(ind + 1, target - c[ind], ds, c, ans);

            ds.pop_back();
        }

        // NOT TAKE - skip all duplicates
        int next = ind + 1;

        while (next < c.size() && c[next] == c[ind]) {
            next++;
        }

        comb(next, target, ds, c, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int target) {

        vector<vector<int>> ans;
        vector<int> ds;

        sort(c.begin(), c.end());

        comb(0, target, ds, c, ans);

        return ans;
    }
};
