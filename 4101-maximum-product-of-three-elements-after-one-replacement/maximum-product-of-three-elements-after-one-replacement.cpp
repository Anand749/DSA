
class Solution {
public:
    long long maxProduct(vector<int>& nums) {

        vector<int>ans;
        for (int x : nums)
            ans.push_back(abs(x));
        
        sort(ans.begin(), ans.end());
        long long n=nums.size();
        return 1LL * ans[n - 1] * ans[n - 2]*100000;
    }
};