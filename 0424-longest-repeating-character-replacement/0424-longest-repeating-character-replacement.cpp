class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int maxi = 0;
        int maxFreq = 0;

        unordered_map<char, int> mpp;

        for (int r = 0; r < s.size(); r++) {

            mpp[s[r]]++;

            maxFreq = max(maxFreq, mpp[s[r]]);

            while ((r - l + 1) - maxFreq > k) {
                mpp[s[l]]--;
                l++;
            }

            maxi = max(maxi, r - l + 1);
        }

        return maxi;
    }
};