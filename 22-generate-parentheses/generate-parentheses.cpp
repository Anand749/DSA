class Solution {
public:
void solve(vector<string>&ans,int Open,int Close, string currStr,int n){
    if(currStr.size()==2*n){
        ans.push_back(currStr);
        return;
    }

    if(Open<n)solve(ans,Open+1,Close,currStr+'(',n);

    if(Close<Open)solve(ans,Open,Close+1,currStr+')',n);
}
    vector<string> generateParenthesis(int n) {

        vector<string>ans;
        string currStr;

        solve(ans,0,0,"",n);
        return ans;
    }
};