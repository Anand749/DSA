class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            string temp="";
            vector<int>freq(26,0);  
            for(int j=i;j<n;j++){
                temp+=s[j];
                freq[s[j]-'a']++;
                int mini=1e9;
                 int maxi=0;
                 for(int k=0;k<26;k++){
                    if(freq[k]==0) continue;
                    mini=min(mini,freq[k]);
                    maxi=max(maxi,freq[k]);
                 }
                // cout<<temp<<" "<<maxi-mini<<"\n";
                ans+=(maxi-mini);
            }
        }
        return ans;
    }
};