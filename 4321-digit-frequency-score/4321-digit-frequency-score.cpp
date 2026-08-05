class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int>m1;
        string num = to_string(n);
        for(char c:num){
            m1[c]++;
        } 
        int sum=0;
        for(const auto& [number, count] : m1){
            if(number == '0'){
                continue;
            }
            sum += (number-'0')*m1[number];
        }
        return sum;
    }
};