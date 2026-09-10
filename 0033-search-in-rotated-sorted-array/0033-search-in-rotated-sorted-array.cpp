class Solution {
public:
    int search(vector<int>& n, int t) {
        int l = 0, r = n.size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (n[mid] == t)
                return mid;

            if (n[l] <= n[mid]) {
                if (n[l] <= t && n[mid] >= t)
                    r = mid - 1;
                else
                    l = mid + 1;
            } else {
                if (n[r] >= t && n[mid] <= t)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }

        return -1;
    }
};