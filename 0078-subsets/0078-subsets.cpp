class Solution {
private:
    void makeSub(vector<int>& nums, vector<int>& num, vector<vector<int>>& ans, int i)
    {
        if(i == nums.size()){
            ans.push_back(num);
            return;
        }

        num.push_back(nums[i]);
        makeSub(nums, num, ans, i+1);
        num.pop_back();

        makeSub(nums, num, ans, i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> num;

        makeSub(nums, num, ans, 0);
        return ans;    
    }
};