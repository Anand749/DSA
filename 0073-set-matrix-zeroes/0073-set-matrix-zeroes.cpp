class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums.size();    /// no.of rows
        int m = nums[0].size(); /////no.of columns

        vector<int> rows;
        vector<int> cols;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        for (int k = 0; k < rows.size(); k++) {
            int a = rows[k];
            int b = cols[k];

            for (int j = 0; j < m; j++) {
                nums[a][j] = 0;
            }
        
            for (int i = 0; i < n; i++) {
                nums[i][b] = 0;
            }
        }
    }
};