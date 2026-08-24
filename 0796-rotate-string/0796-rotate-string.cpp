class Solution {
public:
    bool rotateString(string s, string g) {
        int s1=s.size();
        int g1=g.size();
        if(s1!=g1)return false;

        s=s+s;
 
        if(s.contains(g))return true;


        return false;
    }
};