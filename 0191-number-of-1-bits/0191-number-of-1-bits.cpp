class Solution {
public:
    int hammingWeight(int n) {
        int num = n;
        string result = "";
        while(num > 0){
            result += to_string(num % 2);
            num /= 2;  
        }
        int count = 0;
        for(char c:result){
            if(c == '1'){
                count++;
            }
        }
        return count;
    }
};