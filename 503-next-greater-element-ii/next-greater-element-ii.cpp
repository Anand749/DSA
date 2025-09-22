class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;  
        stack<int> st;                

        
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;
            while (!st.empty() && nums[st.top()] <= nums[idx]) {
                st.pop();
            }
            if (st.empty()) mpp[idx] = -1;
            else mpp[idx] = nums[st.top()];
            st.push(idx);
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(mpp[i]);
        }
        return ans;
    }
};
