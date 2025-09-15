class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size();
        int cnt=0,i=1;
         if (n == 0) return 0;
         sort(nums.begin(), nums.end());

        while(i<n){
            if(nums[i][0]<nums[i-1][1]){
                cnt++; 
                nums[i][1] = min(nums[i][1], nums[i-1][1]);
            }
             
            i++;
        }

        return cnt;
    }
};