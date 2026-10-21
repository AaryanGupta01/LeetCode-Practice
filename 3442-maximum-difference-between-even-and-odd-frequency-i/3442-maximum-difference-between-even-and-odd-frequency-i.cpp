class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>m1;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }
        int diff = 0,max_odd=INT_MIN,min_even = INT_MAX;
        for(const auto&[key,val]:m1){
            if(val % 2 == 0){
                min_even = min(val,min_even);
            }
            else{
                max_odd = max(val,max_odd);
            }
        }
        return max_odd - min_even;
    }
};