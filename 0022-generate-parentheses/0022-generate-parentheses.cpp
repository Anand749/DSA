class Solution {
public:
    void solve(int o, int c, int n, string s, vector<string>& ans) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (o < n)
            solve(o + 1, c, n, s + '(', ans);
        if (c < o)
            solve(o, c + 1, n, s + ')', ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, 0, n, "", ans);
        return ans;
    }
};