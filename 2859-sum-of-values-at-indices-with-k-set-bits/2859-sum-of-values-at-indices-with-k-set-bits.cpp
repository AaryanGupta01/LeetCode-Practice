class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        if(k == 0){
            return nums[0];
        }
        for(int i = 1;i<nums.size();i++){
            string rem = "";
            int cnt = 0;
            int idx = i;
            while(idx > 0){
                int rem1 = idx % 2;
                rem += to_string(rem1); 
                idx /= 2;
            }
            cnt = count(rem.begin(),rem.end(),'1');
            if(cnt == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};