class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        if(s.length() != t.length()){
            return false;
        }
        for(char c:s){
            m1[c]++;
        }
        for(char c1:t){
            m2[c1]++;
        }
        if(m1 == m2) return true;
        else return false;
    }
};