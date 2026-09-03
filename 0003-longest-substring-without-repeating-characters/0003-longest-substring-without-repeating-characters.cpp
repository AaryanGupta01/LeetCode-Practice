class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int>m1;
        int left = 0;
        int max_len = 0;
        for(int right = 0;right<n;right++){
            m1[s[right]]++;
            while(m1[s[right]] > 1){
                m1[s[left]]--;
                left++;
            }
            max_len = max(max_len,right-left+1);
        }
        return max_len;
    }
};