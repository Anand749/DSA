class Solution {
public:
    int myAtoiRec(string& s, int i, int n, long long curr, int sign) {

        if (i >= n || !isdigit(s[i]))
            return curr * sign;

        curr = curr * 10 + (s[i] - '0');

        if (curr * sign >= INT_MAX)return INT_MAX;
        if (curr * sign <= INT_MIN)return INT_MIN;

        
        return myAtoiRec(s, i + 1, n, curr, sign);
    }

    int myAtoi(string s) {
        int i = 0, n = s.size(), sign = 1;
        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;

            i++;
        }
        return myAtoiRec(s, i, n, 0, sign);
    }
};