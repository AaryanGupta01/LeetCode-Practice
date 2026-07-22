class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        string binary1 = bitset<32>(x).to_string();
        string binary2 = bitset<32>(y).to_string();

        for(int i=0;i<binary1.length();i++){
            if( ((binary1[i] - '0') ^ (binary2[i] - '0')) == 1){
                count++;
            }
        }
        return count;
    }
};