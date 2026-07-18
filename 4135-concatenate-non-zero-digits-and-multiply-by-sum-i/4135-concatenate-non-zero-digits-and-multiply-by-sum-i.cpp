class Solution {
public:
    long long sumAndMultiply(int n) {
        long long nums;
        string num="";
        string str = to_string(n);
        for(char i:str){
            if(i == '0'){
                continue;
            }
            else{
                num += i;
            }
        }
        if(num == ""){
            num = "0";
        }
        nums = stoi(num);
        long long temp = nums;
        long long rem,sum=0;
        while(temp > 0){
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        return nums*sum;
    }
};