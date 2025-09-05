class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int five = 0, ten = 0;

        for (int i = 0; i < b.size(); i++) {
            if (b[i] == 5)
                five++;
            else if (b[i] == 10) {
                if (five)
                    five -= 1, ten += 1;
                else
                    return false;
                } 
            else {
                if (five && ten)
                    ten -= 1, five -= 1;
                else if (five >= 3)
                    five -= 3;
                else
                    return false;
            }
        }

        return true;
    }
};