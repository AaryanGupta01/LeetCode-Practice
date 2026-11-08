class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_el = *max_element(nums.begin(),nums.end());
        int cnt = 0;
        for(int num:nums){
            if(num < max_el){
                cnt += max_el-num;
            }
        }
        return cnt;
    }
};