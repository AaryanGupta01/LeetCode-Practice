class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length() < k){
            reverse(s.begin(),s.end());
        }
        else if(s.length() % (2*k) == 0){
            for(int i=0;i<s.length();i+=2*k){
                reverse(s.begin()+i,s.begin()+(i+k));
            }
        }
        else{
            reverse(s.begin(),s.begin()+k);
            for(int i=2*k;i<s.length();i+=2*k){
                if(s.substr(i).length() < k){
                    reverse(s.begin()+i,s.end());
                }
                else{
                    reverse(s.begin()+i,s.begin()+(i+k));
                }
            }
        }
        return s;
    }
};