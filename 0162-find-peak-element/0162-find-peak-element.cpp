class Solution {
public:
    int findPeakElement(vector<int>& n) {
        int l = 0, r = n.size() - 1;

        while (l < r) {
            int mid = (l + r) / 2;

            if (n[mid] < n[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }

        return l;
    }               
};