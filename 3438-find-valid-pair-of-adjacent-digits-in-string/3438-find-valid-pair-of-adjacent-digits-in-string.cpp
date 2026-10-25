class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>m1;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }
        string ans;
        int n = s.length();
        for(int i=0;i<n;i++){
            if((i+1 < n) && (s[i] != s[i+1])){
                if((m1[s[i]] == (s[i]-'0')) && (m1[s[i+1]] == (s[i+1]-'0'))){
                    ans = s.substr(i,2);
                    break;
                }
            }
        }
        return ans;
    }
};