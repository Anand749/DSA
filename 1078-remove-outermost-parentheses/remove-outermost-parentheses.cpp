class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";

        for (auto c : s) {
            if (c == '(') {
                if (!st.empty())
                    ans += c;
                st.push(c);
            } else {
                st.pop();
                if (!st.empty())
                    ans += c;
            }
        }

        return ans;
    }
};