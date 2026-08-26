class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        int right = 0;
        unordered_map<char,int>m1;
        for(char c:s){
            m1[c]++;
        }
        if(m1['1'] < k){
            return "";
        }
        string ans = "";
        for(right = 0;right<s.length();right++){
            if(s[right] == '1'){
                ones++;
            }
            while(ones == k){
                string cur = s.substr(left,right-left+1);
                if(ans == "" || (cur.length() < ans.length()) || (cur.length() == ans.length() && cur < ans)){
                    ans = cur;
                }
                if(s[left] == '1'){
                    ones--;
                }
                left++;
            }
        }
        return ans;
    }
};