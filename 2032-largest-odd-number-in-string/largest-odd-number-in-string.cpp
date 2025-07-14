class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
    
        int n=num.size();

        // for(int i=n-1;i>=0;i--){
        //     if(int(num[i])%2==1){
        //         while(i>=0){
        //             ans+=(num[i]);
        //             i--;
        //         }
        //         break;
        //     } 
        //     else continue;
        // }

        // reverse(ans.begin(),ans.end());

        // return ans;


        int j=-1;
        for(int i=n-1;i>=0;i--){
            if(int(num[i])%2){
                j=i;
                break;
            }
        }
        if(j==-1) return "";
        return num.substr(0,j+1);
    }
};

