class Solution {
public:
    int first(vector<int>& n, int t) {
        int l = 0, r = n.size() - 1;
        int f = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (n[mid] == t) {
                f = mid;
                r = mid - 1;
            } else if (n[mid] < t)
                l = mid + 1;
            else
                r = mid - 1;
        }

        return f;
    }
    int second(vector<int>& n, int t) {
        int l = 0, r = n.size() - 1;
        int s = -1;

        while (l <= r) {
           int mid = l + (r - l) / 2;

            if (n[mid] == t) {
                s = mid;
                l = mid + 1;
            } else if (n[mid] < t)
                l = mid + 1;
            else
                r = mid - 1;
        }

        return s;
    }
    vector<int> searchRange(vector<int>& n, int t) {
        int focc = first(n, t);
        if (focc == -1)
            return{-1, -1};
        int socc = second(n, t);

        return {focc, socc};
    }
};