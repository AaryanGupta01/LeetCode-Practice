class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string n_s = "";
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i] == ')'){
                st.pop();
                if(!st.empty()){
                    n_s += s[i];
                }
            }
            else{
                if(!st.empty()){
                    n_s += s[i];
                }
                st.push(s[i]);
            }
        }
        return n_s;
    }
};