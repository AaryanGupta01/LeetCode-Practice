class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;
        while(n > 0){
            num = n;
            int prod=1;
            while(num > 0){
                int rem = num%10;
                prod *= rem;
                num /= 10;
            }
            if(prod % t == 0){
                return n;
            }
            else{
                n++;
            }
        }
        return 0;
    }
};