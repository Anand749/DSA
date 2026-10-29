class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mpp;
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            int num = nums2[i];

            while (!st.empty() && st.top() <= num)
                st.pop();

            if (st.empty())
                mpp[num] = -1;
            else
                mpp[num] = st.top();

            st.push(num);
        }
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};