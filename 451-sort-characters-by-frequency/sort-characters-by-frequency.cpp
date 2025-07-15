class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }

         vector<pair<int,char>>freq;

         for(auto it:mpp){
         freq.push_back({it.second,it.first});
         }

         sort(freq.rbegin(),freq.rend());

        string ans;
        for(auto it:freq)
        {
            ans+=string(it.first,it.second);
        }
        return ans;

    }
};