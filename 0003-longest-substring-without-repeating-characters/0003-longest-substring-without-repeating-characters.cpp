class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        int maxi = 0;

        unordered_map<char, int> mpp;
        while (r < n) {
            mpp[s[r]]++;
            while (mpp[s[r]] > 1) {
                mpp[s[l]]--;
                l++;
            }
            int le = r - l + 1;
            maxi = max(maxi, le);

            r++;
        }
        return maxi;
    }
};