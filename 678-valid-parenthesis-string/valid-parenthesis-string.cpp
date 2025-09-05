class Solution {
public:
    bool checkValidString(string s) {
        int lo = 0;  
        int hi = 0; 

        for (char c : s) {
            if (c == '(') {
                lo++; 
                hi++;
            } else if (c == ')') {
                lo--; 
                hi--;
            } else if (c == '*') {
                lo--;    
                hi++;    
            }

            if (hi < 0) return false;  
            if (lo < 0) lo = 0;         
        }

        return lo == 0;   
    }
};
