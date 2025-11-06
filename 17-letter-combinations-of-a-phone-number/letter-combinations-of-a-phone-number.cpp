class Solution {
    void solve(string digits,vector<string>&ans,string comb,int index,string map[]){
        if(index>=digits.size()){
            ans.push_back(comb);
            return;
        }
        int num=digits[index]-'0';
        string value=map[num];


        for(int i=0;i<value.size();i++){
            comb.push_back(value[i]);
            solve(digits,ans,comb,index+1,map);
            comb.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
          vector<string> ans;
         if (digits.size()==0) return ans;
        string comb;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,"",0,map);
        return ans;
    }
};