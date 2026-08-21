class Solution {
public:
    bool isPalindrome(string s) {
        string n="";
        if(s.empty()){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if(isspace(s[i])){
                n+="";
            }
            if(!isalnum(s[i])){
                n+="";
            }
            else if(s[i] == ',' || s[i] == ';' || s[i] == ':'){
                n+="";
            }
            else{
                n+=s[i];
            }
        }
        string ln="";
        for(char c:n){
            ln += tolower(c);
        }
        int j = ln.length()-1;
        for(int i=0;i<ln.length()/2;i++){
            if(ln[i] == ln[j]){
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};