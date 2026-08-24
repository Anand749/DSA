class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a1 = s.size();
        int t1 = t.size();

        if (a1 != t1)
            return false;

        unordered_map<char, char> app, ap;

        for (int i = 0; i < s.size(); i++) {

           if(app.count(s[i])&& app[s[i]]!=t[i])return false;
           if(ap.count(t[i])&& ap[t[i]]!=s[i])return false;

           app[s[i]]=t[i];
           ap[t[i]]=s[i];
        }

        return true;
    }
};