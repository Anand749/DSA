class Solution {
public:


    vector<int> prevSmallEle(vector<int>& heights) {
        int n = heights.size();
        vector<int> pse(n, -1);
        stack<int> st;

        for (int i = 0;i<n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }

    vector<int> nextSmallEle(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n, n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
         

        vector<int> pse = prevSmallEle(heights);
        vector<int> nse = nextSmallEle(heights);

        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int width = nse[i] - pse[i] - 1;
            int length = heights[i];

            int area = heights[i] * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};