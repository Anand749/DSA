// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int min_element = nums[0];

//         // Iterate through the array and update the minimum element
//         for (int i = 1; i < nums.size(); i++) {
//             min_element = min(min_element, nums[i]);
//         }

//         return min_element;
//     }

// };

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            } else {

                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};
