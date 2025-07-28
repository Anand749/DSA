class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto it : s) {
            if (it == '(' || it == '[' || it == '{')
                st.push(it);
            else {
                if (st.empty())
                    return false;
                else {
                    char ch = st.top();
                    st.pop();

                    if (it == ')' && ch == '(' ||
                        it == '}' && ch == '{' ||
                        it == ']' && ch == '[') {
                        continue;
                    } else
                        return false;
                }
            }
        }

        return st.empty();
    }
};