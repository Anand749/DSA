class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n = f.size();
        int l = 0, r = 0;
        int maxi = 0;
        unordered_map<int, int> mpp;

        while (r < n) {
            mpp[f[r]]++;

            while (mpp.size() > 2) {
                mpp[f[l]]--;

                if (mpp[f[l]] == 0)
                    mpp.erase(f[l]);
                l++;
            }

            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};