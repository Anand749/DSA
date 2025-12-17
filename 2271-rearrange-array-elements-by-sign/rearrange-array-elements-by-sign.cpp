class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)neg.push_back(nums[i]);
            else pos.push_back(nums[i]);

        }
          int p = 0, n = 0;

         for(int i=0;i<nums.size();i++){
            if(i%2==0)nums[i]=pos[p++];
            else nums[i]=neg[n++];
         }

         return nums;

    }
};