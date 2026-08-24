class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        int pair=0; 
        int left=0;
        for(const auto&[key,val]:m1){
            pair += val/2;
            left += val%2;
        }
        vector<int>ans = {pair,left};
        return ans;
    }
};