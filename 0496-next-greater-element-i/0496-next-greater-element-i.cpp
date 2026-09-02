class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mpp;
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            int ele = nums2[i];
            while (!st.empty() && st.top() <= ele)
                st.pop();

            if (st.empty())
                mpp[ele] = -1;
            else
                mpp[ele] = st.top();

            st.push(ele);
        }

        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mpp[nums1[i]]);
        }

        return ans;
    }
};