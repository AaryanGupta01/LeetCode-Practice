class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        int prefix = 1;
        int suffix = 1;
        int max_prod = INT_MIN; 
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n-1-i];

            max_prod = max({max_prod,prefix,suffix});
        }
        return max_prod;
    }
};