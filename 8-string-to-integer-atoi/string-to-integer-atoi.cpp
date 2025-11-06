class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        long long ans = 0;
        int sign = 1;

        while (i < n && s[i] == ' ')
            i++;

         if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < n && s[i] == '+') {
            sign = 1;
            i++;
        };

        while (i < n && isdigit(s[i])) {
            int diff = s[i] - '0';
            ans = ans * 10 + diff;
            if (ans * sign > INT_MAX) return INT_MAX;
            if (ans * sign < INT_MIN) return INT_MIN;
            i++;
        }

        return ans * sign;
    }
};