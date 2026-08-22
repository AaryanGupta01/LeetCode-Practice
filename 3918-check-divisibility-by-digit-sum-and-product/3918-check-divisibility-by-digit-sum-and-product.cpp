class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0,prod = 1;
        int temp = n;
        while(temp > 0){
            int rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        int temp1 = n;
        while(temp1 > 0){
            int rem1 = temp1 % 10;
            prod *= rem1;
            temp1 /= 10;
        }
        if(n % (sum+prod) == 0){
            return true;
        }
        return false;
    }
};