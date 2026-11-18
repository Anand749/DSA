class Solution {

public:
    const long long MOD = 1000000007;
    long long sqr(long long a, long long b) {

        long long res = 1;

        while (b > 0) {
            if (b % 2 == 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b /= 2;
        }

        return res;
    }
    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = (n - (n / 2));

        long long ans = (sqr(5, even) * sqr(4, odd)) % MOD;
        return (int)ans;
    }
};