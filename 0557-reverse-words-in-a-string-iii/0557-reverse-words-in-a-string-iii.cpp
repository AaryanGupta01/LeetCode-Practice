class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for(int i=0;i<s.length();i++){
            if(isspace(s[i]) || i == s.length()-1){
                if(i == s.length()-1){
                    reverse(s.begin()+start,s.begin()+i+1);
                    start = i;
                }
                else{
                    reverse(s.begin()+start,s.begin()+i);
                    start = i+1;
                }
            }
        }
        return s;
    }
};