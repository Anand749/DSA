class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int maxlength = 0;
        int zerocnt = 0;

        while (r < nums.size()) {
            if (nums[r] == 0)
                zerocnt++;
            if (zerocnt > k) {
                while (zerocnt > k) {
                    
                    if (nums[l] == 0)
                        zerocnt--;

                        l++;
                }
            }

           int length = r - l + 1;
            maxlength = max(length, maxlength);
            r++;
        }

        return maxlength;
    }
};