class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int num=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=num){
                ans.push_back(num);
                i--;
            }
            num++;
        }

        return ans;
    }
};