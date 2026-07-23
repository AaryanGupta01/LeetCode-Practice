class Solution {
public:
    bool judgeSquareSum(long long c) {
        long long a,b;
        bool ans = false;
        a = 0;
        b = floor(sqrt(c));
        
        while(a <= b){
            if((a*a + b*b) == c){
                ans = true;
                return true;
            }
            else if((a*a+b*b) > c){
                b--;
            }
            else{
                a++;
            }
        }
        return ans;
    }
};