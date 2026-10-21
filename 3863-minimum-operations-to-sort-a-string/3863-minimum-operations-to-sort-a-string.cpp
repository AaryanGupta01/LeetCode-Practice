class Solution {
public:
    int minOperations(string s) {
        string c = s;
        int len = s.length();
        sort(c.begin(),c.end());
        if(c == s){
            return 0;
        }
        else if(s.length() == 2){
            return -1;
        }
        else if((s[0] == c[0] && s[len-1] == c[len-1]) || (s[0] == c[0] || s[len-1] == c[len-1])){
            return 1;
        }
        for (int i = 1; i < len - 1; ++i) {
            if (s[i] == c[0] || s[i] == c[len-1]) {
                return 2;
            }
        }
        return 3;
    }
};