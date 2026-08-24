class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maxi=0;
        int cnt=0;
        
        for(auto ch:s){
            if(ch=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }
            if(ch==')'){
                cnt--;
            }
        }

        return maxi;
    }
};