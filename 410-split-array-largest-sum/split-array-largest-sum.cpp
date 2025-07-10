class Solution {
    int countPartitions(vector<int>& a, int maxSum) {
        int n = a.size();
        int partitions = 1;
        long long subarraySum = 0;
        for (int i = 0; i < n; i++) {
            if (subarraySum + a[i] <= maxSum) {

                subarraySum += a[i];
            } else {

                partitions++;
                subarraySum = a[i];
            }
        }
        return partitions;
    }

public:
    int splitArray(vector<int>& weights, int k) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int partitions = countPartitions(weights, mid);
            if (partitions > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};