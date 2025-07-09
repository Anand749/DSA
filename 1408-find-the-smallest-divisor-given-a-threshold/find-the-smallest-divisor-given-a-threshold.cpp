#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
    int sum1(const vector<int>& nums, int mid) {
        int sum = 0;
        for (int num : nums) {
            sum += ceil((double)num / mid);
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (sum1(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
