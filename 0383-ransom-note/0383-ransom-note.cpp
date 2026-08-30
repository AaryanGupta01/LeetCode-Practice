class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rn;
        unordered_map<char,int>m;
        for(char c:ransomNote){
            rn[c]++;
        }
        for(char a:magazine){
            m[a]++;
        }
        for(const auto&[key,val]:rn){
            if(m[key] < val){
                return false;
            }
        }
        return true;
    }
};