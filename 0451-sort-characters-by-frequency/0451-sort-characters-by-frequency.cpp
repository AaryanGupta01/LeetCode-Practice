class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m1;
        for(char c:s){
            m1[c]++;
        }
        int size = m1.size();
        string ans = "";
        char key;
        for(int i=0;i<size;i++){
            int max = 0;
            for(const auto&[ch,freq]:m1){
                if(freq > max){
                    max = freq;
                    key = ch;
                }

            }
            for(int i=0;i<max;i++){
                ans += key;
            }
            m1.erase(key);
        }
        return ans;
    }
};