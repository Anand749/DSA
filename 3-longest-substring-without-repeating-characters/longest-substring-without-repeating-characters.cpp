class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        unordered_map<char, int> mpp;
        int maxlength = 0;
        int n = s.size();

        while (r < n) {
            mpp[s[r]]++;

            while (mpp[s[r]] > 1) {
                mpp[s[l]]--;
                l++;
            }

            int length = r - l + 1;
            maxlength = max(maxlength, length);
            r++;
        }

        return maxlength;
    }
};