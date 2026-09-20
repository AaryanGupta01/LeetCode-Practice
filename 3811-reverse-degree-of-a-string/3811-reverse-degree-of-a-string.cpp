class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            int val = 27 - (c-'a' + 1);
            sum += (i+1)*val;
        }
        return sum;
    }
};