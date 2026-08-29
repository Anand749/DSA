class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastA = -1;
        int lastB = -1;
        int lastC = -1;

        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == 'a')
                lastA = right;

            else if (s[right] == 'b')
                lastB = right;

            else
                lastC = right;

            int left = min({lastA, lastB, lastC});

            if (left != -1)
                ans += left + 1;
        }

        return ans;
    }
};