class Solution {
public:
    long long maxProduct(int n) {
        vector<int> num;
        while(n > 0){
            int rem = n % 10;
            num.push_back(rem);
            n /= 10; 
        }
        sort(num.begin(),num.end());
        long long ans = num[num.size()-2]*num[num.size()-1];
        return ans;
    }
};